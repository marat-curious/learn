#include <iostream>
#include <string>
#include <vector>

class Screen;

class Window_mgr {
    public:
        using ScreenIndex = std::vector<Screen>::size_type;
        void clear(ScreenIndex);

    private:
        std::vector<Screen> screens;
};

class Screen {
    friend void Window_mgr::clear(ScreenIndex);

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


    private:
        pos cursor = 0;
        pos height = 0, width = 0;
        std::string contents;
};

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

void Window_mgr::clear(ScreenIndex i)
{
    Screen &s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}

