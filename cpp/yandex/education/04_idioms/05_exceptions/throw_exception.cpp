#include <iostream>

struct WrongAgeException {
    int age;
        
    WrongAgeException(int age) {
        this->age = age;
    }
};

int ReadAge() {
    std::cin.exceptions(std::istream::failbit);
    int age;
    std::cin >> age;
    if (age < 0 || age >= 128) {
        throw WrongAgeException(age);
    }
    return age;
};

int main() {
    int age;
    try {
        age = ReadAge();
    } catch (const WrongAgeException& ex) {
        std::cerr << "Age is not correct: " << ex.age << "\n";
        return 1;
    } catch (const std::istream::failure& ex) {
        std::cerr << "Failed to read oge: " << ex.what() << "\n";
        return 1;
    } catch (...) {
        std::cerr << "Some other exception\n";
        return 1;
    }
    return 0;
}
