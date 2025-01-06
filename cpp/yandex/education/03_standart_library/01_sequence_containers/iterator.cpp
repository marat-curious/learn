#include <iostream>
#include <list>

int main() {
    std::list<int> l = {0, 10, 15, 20, 25};

    // use auto instead std::list<int>::iterator
    // auto iter = l.begin();
    // ++iter;
    // l.insert(iter, 5);

    // or
    auto iter = std::next(l.begin());

    std::cout << *iter << "\n";

    --iter;
    ++iter;

    for (auto iter = l.begin(); iter != l.end(); ++iter) {
        std::cout << *iter << "\n";
    }

    // reverse iteration
    for (auto iter = l.rbegin(); iter != l.rend(); ++iter) {
        std::cout << *iter << "\n";
    }

    // remove all even numbers
    for (auto iter = l.begin(); iter != l.end(); ) {
        if (*iter % 2) {
            iter = l.erase(iter);
        } else {
            ++iter;
        }
    }

    return 0;
}
