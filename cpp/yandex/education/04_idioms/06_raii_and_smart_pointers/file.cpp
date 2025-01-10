#include <cstdio>
#include <iostream>

int main() {
    if (std::FILE* f = std::fopen("input.txt", "r"); f != nullptr) {
        char buf[100];
        std::fscanf(f, "%99s", buf); // read maximum 99 char into buffer
    } else {
        std::cout << "File open failure!\n";
    }

    return 0;
}
