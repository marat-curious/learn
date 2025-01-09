#include <iostream>

class C {
public:
    int x = 0;
    inline static int sx = 0; // static field initialized in class
    static const int scx = 100; // static constant
};

class D {
private:
    int x = 0;
    inline static int sx = 0;

public:
    void f(int y) {
        x = y;
        sx = y;
    }

    static void sf(int y) {
        // hasn't access to current class options, but has access to static fields of class
        sx = y;
    }
};

int main() {
    std::cout << C::sx << " " << C::scx << "\n"; // 0 100

    C::sx = 1;
    std::cout << C::sx << " " << C::scx << "\n"; // 1 100

    C c1, c2;
    c1.x = 42;
    c2.x = 17;
    c2.sx = 13;

    std::cout << c1.x << " " << c1.sx << " " << c1.scx << "\n"; // 42 13 100
    std::cout << c2.x << " " << c2.sx << " " << c2.scx << "\n"; // 17 13 100

    D obj;
    obj.f(1);

    D::sf(2);
    obj.sf(3);

    return 0;
}
