#include <string>

using std::string;

struct Person {
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
