#include <string>  // library there defined std::string type

int main() {
    int value;
    std::string name, surname;

    value = 42;
    // Compilation error
    // value = "Hello, world!";

    std::string title = "Bjarne Stroustrup";

    return 0;
}
