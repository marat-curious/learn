#include <iostream>
#include <string>

using std::string;

int main(int argc, char **argv)
{
    string arguments;
    for (int i = 0; i != argc; ++i) {
        arguments += (static_cast<string>(argv[i]) + " ");
    }
    std::cout << arguments << std::endl;
    return 0;
}
