class Book {
    public:
        Book() = default;
        Book(string isbn, unsigned double price, string name, string author): isbn(isbn), price(price), name(name), author(author) {};

    private:
        string isbn;
        unsigned double price;
        string name, author;
};

class Date {
    public:
        Date() = default;
        Date(int y, int m, int d): year(y), month(m), day(d) {};
    private:
        unsigned year = 2025, month = 1, day = 1;
};

class Employee {
    public:
        Employee() = default;
        Employee(string n, string s): name(n), speciality(s) {};

    private:
        string name, speciality;
};

class Vehicle {
    public:
        Vehicle() = default;
        Vehicle(string n, string ow): number(n), owner(ow) {};

    private:
        string number, owner;
};

class Object {
    public:
        Object() = default;
        Object(vector<string> &prop): properties(prop) {};

    private:
        vector<string> properties;
};

class Tree {
    public:
        Tree() = defualt;
        Tree(vector<Tree> l): leafs(l) {};

    private:
        vector<Tree> leafs;
};
