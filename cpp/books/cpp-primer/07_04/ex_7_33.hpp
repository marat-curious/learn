#include <iostream>
#include <string>

class Screen {
    public:
        using pos = std::string::size_type;

        Screen() = default;
        Screen(pos h, pos w): height(h), width(w), contents(h * w, ' ') {};
        Screen(pos h, pos w, char c): height(h), width(w), contents(h * w, c) {};

        char get() const { return contents[cursor]; };
        char get(pos r, pos c) const  { return contents[r * width + c]; };

        inline Screen &move(int, int);
        inline Screen &set(char);
        inline void display(std::ostream &os);

        pos size() const;

    private:
        pos cursor = 0;
        pos height = 0, width = 0;
        std::string contents;
};

Screen::pos Screen::size() const
{
    return height * width;
}

inline Screen &Screen::move(int x, int y)
{
    if (x < 0 || y < 0 || (x * width + y) > (height * width))
        return *this;

    cursor = x * width + y;
    return *this;
}

inline Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline void Screen::display(std::ostream &os)
{
    os << contents;
}
