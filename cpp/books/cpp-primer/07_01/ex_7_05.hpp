#include <string>

using std::string;

struct Person {
    string name;
    string address;

    string get_name() const { return name; };
    string get_address() const { return address; };
};
