#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq;

    for (int x : {3, 14, 15, 92, 6, 0, 1, 10}) {
        pq.push(x);
    }

    while (!pq.empty()) {
        std::cout << pq.top() << "\n";
        pq.pop();
    }

    // 92, 15, 14, 10, 6, 3, 1, 0

    std::priority_queue<int, std::vector<int>, std::greater<int>> pqg;

    for (int x : {2, 14, 15, 92, 6}) {
        pqg.push(x);
    }

    while(!pqg.empty()) {
        std::cout << pqg.top() << "\n";
        pqg.pop();
    }

    // 3 6 14 15 92

    return 0;
}
