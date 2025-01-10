#include <cstdio>
#include <exception>
#include <iostream>
#include <string>

class CannotOpenFileException {};

class File {
private:
    std::FILE * f;

public:
    File(const std::string& name) {
        if (f = std::fopen(name.c_str(), "r"); f == nullptr) {
            throw CannotOpenFileException();
        }
    }

    File(const File&) = delete;
    File operator = (const File&) = delete;

    // move constructor
    File(File&& other) noexcept {
        f = other.f;
        other.f = nullptr;
    }

    File& operator = (File&& other) noexcept {
        if (f != nullptr && f != other.f) {
            fclose(f);
        }

        f = other.f;
        other.f = nullptr;
        // or
        // std::swap(f, other.f);

        return *this;
    }

    ~File() noexcept {
        if (f != nullptr) {
            std::fclose(f);
        }
    }

    std::string Read() const {
        char buf[100];
        std::fscanf(f, "%99s", buf);
        return buf;
    }
};

int main() {
    try {
        File file("input.txt");
        auto str = file.Read();
    } catch (const CannotOpenFileException&) {
        std::cout << "File open failure\n";
    }

    return 0;
}
