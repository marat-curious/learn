#include <iostream>
#include <string>

enum class AnimalType {
    Cat,
    Dog
};

class Animal {
private:
    AnimalType type;
    std::string name;

public:
    Animal(AnimalType t, const std::string& n): type(t), name(n) {
    }

    const std::string& GetName() const {
        return name;
    }

    std::string Voice() const {
        switch (type) {
            case AnimalType::Cat:
                return "Meow!";
            case AnimalType::Dog:
                return "Woof!";
            default:
                return "Unknown creature type";
        }
    }
};

template <typename Creature>
void Process(const Creature& creature) {
    std::cout << creature.GetName() << ": " << creature.Voice() << "\n";
}

int main() {
    Animal c(AnimalType::Cat, "Tom");
    Animal d(AnimalType::Dog, "Buffa");
    Process(c);
    Process(d);
    return 0;
}
