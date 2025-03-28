#include <iostream>
#include <memory>
#include <string>
#include <vector>

class Animal {
private:
    std::string name;

public:
    Animal(const std::string& n): name(n) {
    }

    const std::string& GetName() const {
        return name;
    }

    virtual std::string Voice() const = 0;

    virtual ~Animal() {
    }
};

class Cat: public Animal {
public:
    Cat(const std::string& n): Animal(n) {
    }

    std::string Voice() const override {
        return "Meow!";
    }
};

class Dog: public Animal {
public:
    Dog(const std::string& n): Animal(n) {
    }

    std::string Voice() const override {
        return "Woof!";
    }
};

void Process(const Animal& creature) {
    std::cout << creature.GetName() << ": " << creature.Voice() << "\n";
}

int main() {
    std::vector<std::unique_ptr<Animal>> zoo;

    zoo.emplace_back(std::make_unique<Cat>("Tom"));
    zoo.emplace_back(std::make_unique<Dog>("Buffa"));

    Process(*zoo[0]);
    Process(*zoo[1]);

    return 0;
}
