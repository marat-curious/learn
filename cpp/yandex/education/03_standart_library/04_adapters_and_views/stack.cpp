#include <iostream>
#include <stack>

int main() {
    // define container for stack, default: std::deque
    // std::stack<int, std::list<int>> s;
    std::stack<int> s;
    s.push(1);
    s.push(13);
    s.pop();

    std::cout << s.top() << "\n";

    s.pop();

    if (s.empty()) {
        std::cout << "Stack is empty\n";
    }

    return 0;
}
