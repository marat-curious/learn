#include <iostream>
#include <string>

class Cat {
private:
    std::string name;

public:
    Cat(const std::string& n): name(n) {
    }

    const std::string& GetName() const {
        return name;
    }

    std::string Voice() const {
        return "Meow!";
    }
};

class Dog {
private:
    std::string name;

public:
    Dog(const std::string& n): name(n) {
    }

    const std::string& GetName() const {
        return name;
    }

    std::string Voice() const {
        return "Woof!";
    }
};

template <typename Creature>
void Process(const Creature& creature) {
    std::cout << creature.GetName() << ": " << creature.Voice() << "\n";
}

int main() {
    Cat c("Tom");
    Dog d("Buffa");
    Process(c);
    Process(d);
    return 0;
}
