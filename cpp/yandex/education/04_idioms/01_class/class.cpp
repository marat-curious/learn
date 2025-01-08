#include <iostream>

class Time {
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time(int h, int m, int s); // constructor declation

    // constructor overloading
    // Time() = default;
    // Time(int h, int m, int s); // declared before
    // Time(int s): Time(0, 0, s);

    int GetHours() const;
    int GetMinutes() const;
    int GetSeconds() const;

    void AddSeconds(int s) {
        seconds += s;
    }
};

Time::Time(int h, int m, int s) {
    // can generate exception
    // if (s < 0 || s > 59 || m < 0 || m > 59 || h < 0 || h > 23) {
    //     throw std::out_of_range("Wrong time!");
    // }

    // or

    if (s < 0 || s > 59) {
        // todo something with incorrect seconds
    }

    if (m < 0 || m > 59) {
        // todo something with incorrect minutes
    }

    if (h < 0 || h > 23) {
        // todo something with incorrect hours
    }

    // or

    m += s / 60;
    s %= 60;

    if (s < 0) {
        m -= 1;
        s += 60;
    }

    h += m / 60;
    m %= 60;

    if (m < 0) {
        h -= 1;
        m += 60;
    }

    h %= 24;

    if (h < 0) {
        h += 24;
    }

    hours = h;
    minutes = m;
    seconds = s;
}

int Time::GetHours() const {
    return hours;
}

int Time::GetMinutes() const {
    return minutes;
}

int Time::GetSeconds() const {
    return seconds;
}

// ordinary function with argument type Time
bool IsAfternoonTime(const Time& time) {
    return time.GetHours() >= 12;
}

int main() {
    Time t(13, 30, 0);
    // t.hours = 42; // compilation error

    if (IsAfternoonTime(t)) {
        std::cout << t.GetHours() - 12 << "PM\n";
    }

    t.AddSeconds(42);

    const Time& cref = t; // constant reference

    std::cout << cref.GetHours() << "\n";

    // cref.AddSeconds(20); // compilation error

    return 0;
}
