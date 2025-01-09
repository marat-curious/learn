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

class C {
private:
    A a;
    int y;

public:
    void Func1() {
        return a.Func1();
    }

    void Func2() {
        std::cout << "C::Func2()\n";
    }

    void Func3() {
        std::cout << "C::Funct3()\n";
    }

    const A& GetA() const {
        return a;
    }
};

int main() {
    C c;
    c.Func1();
    c.Func2();
    c.Func3();

    return 0;
}
