enum class Color {
    White,
    Red,
    Orange,
    Blue
};

int main() {
    Color color1 = Color::Red;
    Color color2 = Color::Blue;

    int value = static_cast<int>(color2); // 3
    Color color3 = static_cast<Color>(2); // Color::Orange

    return 0;
}
