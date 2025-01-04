enum class Color {
    White,
    Red,
    Orange,
    Blue
};

struct Point {
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;
    Color color;
};

int main() {
    Point point1;
    point1.color = Color::Blue;

    Point point2 = {1.4, -2.2, -3.98, Color::Red}; // x = 1.4, y = -2.2, z = -3.98, color = Color::Red

    point2.z = 32; // (.) dot is used for access to struct field
    point2.x += 2;

    // C++20
    Point point3 = {.x = 1.4, .y = -2.2, .z = -3.98};
    Point point4 = {.color = Color::Orange};

    return 0;
}
