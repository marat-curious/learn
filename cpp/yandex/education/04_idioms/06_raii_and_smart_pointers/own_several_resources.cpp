template <typename A>
class C {
private:
    A* x;

public:
    C() {
        x = new A();
    }

    // copy constructor
    C(const C& other) {
        x = new A(*other.x);
    }

    C& operator = (const C& other) {
        *x = *other.x;
        return *this;
    }

    ~C() {
        delete x;
    }
};

template <typename A, typename B>
class D {
private:
    C<A> x;
    C<B> y;

public:
    D() {
        x = new A();
        try {
            y = new B();
        } catch (...) {
            delete x;
            throw;
        }
    }

    D(const D& other) {
        x = new A(*other.x);
        y = new B(*other.y);
    }

    D& operator = (const D& other) {
        *x = *other.x;
        *y = *other.y;
        return *this;
    }

    ~D() {
        delete x;
        delete y;
    }
}

int main() {
    C<int> c1;
    C<int> c2(c1); // pointers c1.x and c2.x equal
    return 0;
} // destructor in c1 frees memory again
