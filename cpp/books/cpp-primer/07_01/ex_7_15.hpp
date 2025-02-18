#include <string>

using std::string;

struct Person;
istream &read(istream &, Person &);

struct Person {
    Person() = default;
    Person(const string n, const string a): name(n), address(a) {};
    Person(istream &is) { return read(is, *this); };

    string name;
    string address;

    string get_name() const { return name; };
    string get_address() const { return address; };
};

istream &read(istream &is, Person &p)
{
    is >> p.name >> p.address;
    return is;
}

ostream &print(ostream &os, Person &p)
{
    os << p.name << " " << p.address;
    return os;
}
