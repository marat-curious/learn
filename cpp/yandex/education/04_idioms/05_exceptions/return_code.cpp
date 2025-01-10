#include <iostream>

int ReadAge() {
    int age;
    std::cin >> age;
    if (age < 0 || age >= 128) {
        return -1;
    }
    return age;
}

int main() {
    if (int age = ReadAge(); age == -1) {
        std::cout << "You enter wrong age!\n";
    } else {
        std::cout << "You enter age: " << age << "\n";
    }
    return 0;
}
