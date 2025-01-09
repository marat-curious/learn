#include <iostream>

class A {
private:
    int x;
public:
    void Func1() {
        std::cout << "A::Func1()\n";
    };

    void Func2() {
        std::cout << "A::Func2()\n";
    };
};

class B: public A {
private:
    int y;
public:
    void Func2() {
        std::cout << "B::Func2()\n";
    };

    void Func3() {
        std::cout << "B::Func3()\n";
    };
};

int main() {
    B b;
    b.Func1();
    b.Func2();
    b.A::Func2();
    b.Func3();

    std::cout << "sizeof(A): " << sizeof(A) << "\n"; // 4 bytes (x)
    std::cout << "sizeof(B): " << sizeof(B) << "\n"; // 8 bytes (x and y)

    return 0;
}
