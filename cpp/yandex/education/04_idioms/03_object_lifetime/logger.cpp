#include <iostream>

class Logger {
private:
    inline static int counter = 0;

    const int id = 0; // must be initialized in constructor

public:
    // constructor
    Logger(): id(++counter) { // initialize id of current object
        std::cout << "Logger(): " << id << "\n";
    }

    // constructor overloading
    // Logger(int x) {
    //     id = x;
    //     std::cout << "Logger(int): " << id << "\n";
    // }

    // constructor of copy object
    Logger(const Logger& other): id(++counter) {
        // id = other.id;
        std::cout << "Logger(const Logger&): " << id << " " << other.id << "\n";
    }

    // move constructor
    Logger(Logger&& other): id(++counter) {
        std::cout << "Logger(Logger&&): " << id << " " << other.id << "\n";
    }

    Logger& operator = (Logger&& other) {
        // id = other.id;
        std::cout << "Logger& operator = (Logger&&): " << id << " " << other.id << "\n";
        return *this;
    }

    // destructor
    ~Logger() {
        std::cout << "~Logger(): " << id << "\n";
    }
};

class OuterLogger {
private:
    Logger innerLogger1;
    Logger innerLogger2;

    inline static int counter = 0;
    const int id;

public:
    OuterLogger(): id(++counter) {
        std::cout << "OuterLogger(): " << id << "\n";
    }

    OuterLogger(const OuterLogger& other): innerLogger1(other.innerLogger1), innerLogger2(other.innerLogger2), id(++counter) {
        std::cout << "OuterLogger(const OuterLogger&): " << id << " " << other.id << "\n";
    }

    OuterLogger& operator = (const OuterLogger& other) {
        innerLogger1 = other.innerLogger1;
        innerLogger2 = other.innerLogger2;
        std::cout << "OuterLogger& operator = (const OuterLogger&): " << id << " " << other.id << "\n";
        return *this;
    }

    ~OuterLogger() {
        std::cout << "~OuterLogger(): " << id << "\n";
    }
};

void f(const Logger& x) { // version for ordinary objects
    std::cout << "void f(const Logger&)\n";
}

void f(Logger&& x) { // version for temporary arguments of type Logger
    std::cout << "void f(Logger&&)\n";
}

int main() {
    // auto objects
    // Logger x1(1);
    // {
    //     Logger x2(2);
    // }
    // Logger x3(3);

    // in dinamic memory
    // Logger* ptr1 = new Logger(1);
    // Logger* ptr2 = new Logger(2);

    // delete ptr1;
    // delete ptr2;

    // Logger x1(1);
    // Logger x2 = x1; // create copy

    // Logger x1;
    // Logger x2 = x1;
    // Logger x3;
    // x3 = x1;

    // OuterLogger outerLogger;

    // temporary objects
    // f(Logger()); // called overloaded version for temporary arguments
    // std::cout << "\n";

    // Logger x;
    // f(x); // called ordinary version
    // std::cout << "\n";

    Logger x1;
    Logger x2 = x1; // ordinary constructor is called
    Logger x3 = Logger(); // copy elision
    Logger x4 = std::move(x1); // move constructor

    return 0;
}
