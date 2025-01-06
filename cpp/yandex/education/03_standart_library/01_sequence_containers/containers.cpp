#include <array>
#include <deque>
#include <forward_list>
#include <iostream>
#include <iterator>
#include <list>

// std::list node template example
template <typename T>
struct Node {
    T value;
    Node* prev;
    Node* next;
};

int main() {
    // std::array<T, N> => T[N]
    std::cout << "std::array container:";
    std::array<int, 3> point = {1, 2, 3};

    for (int x : point) {
        std::cout << " " << x;
    }

    std::cout << std::endl;

    // std::deque => double-ended queue
    std::cout << "std::deque container:";
    std::deque<int> d = {1, 2, 3, 4};

    d.push_back(5);
    d.push_back(6);
    d.pop_back(); // remove last element
    d.push_front(0);
    d.push_front(-1);
    d.pop_front(); // remove first element

    for (size_t i = 0; i != d.size(); ++i) {
        std::cout << " " << d[i];
    }

    // or range-based for:

    for (int x : d) {
        std::cout << " " << x;
    }

    std::cout << std::endl;

    // std::list
    std::cout << "std::list container:";
    std::list<int> l = {10, 15, 20};

    l.push_front(5);
    l.push_front(0);
    l.push_back(25);
    l.push_back(30);
    l.pop_front();
    l.pop_back();

    for (int x : l) {
        std::cout << " " << x;
    }

    std::cout << std::endl;

    // std::forward_list
    std::cout << "std::forward_list:";
    std::forward_list<int> fl = {3, 42, 5};

    fl.push_front(2);
    // fl.push_back(10); // compilation error

    auto iter = std::next(fl.begin());
    iter = fl.erase_after(iter);
    fl.insert_after(iter, 4);

    for (int x : fl) {
        std::cout << " " << x; // 2 3 5 4
    }

    std::cout << std::endl;

    return 0;
}
