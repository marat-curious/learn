#include <memory>
#include <utility>

template <typename T>
class ForwardList {
private:
    struct Node {
        T data;
        std::unique_ptr<Node> next;
    };

    std::unique_ptr<Node> head;

public:
    void PushFront(const T& elem) {
        head = std::make_unique<Node>(elem, std::move(head));
    }

    void PopFront() {
        head = std::move(head->next);
    }

    const T& Front() const {
        return head->data;
    }

    bool Empty() const {
        return head == nullptr;
    }

    ~ForwardList() {
        while(!Empty()) {
            PopFront();
        }
    }
}

int* f() {
    // ...
    return new int(123);
}

std::unique_ptr<int> g() {
    // ...
    return std::make_unique<int>(123);
}

int main() {
    f(); // memory leak
    g(); // OK
    return 0;
}
