#include <iostream>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

    void Normalize() {
        minutes += seconds / 60;
        seconds %= 60;
        if (seconds < 0) {
            minutes -= 1;
            seconds += 60;
        }

        hours += minutes / 60;
        minutes %= 60;
        if (minutes < 0) {
            hours -= 1;
            seconds += 60;
        }

        hours %= 24;
        if (hours < 0) {
            hours += 24;
        }
    }


public:
    Time(int h, int m, int s) {  // constructor declation
        hours = h;
        minutes = m;
        seconds = s;
        Normalize();
    }

    int GetHours() const;
    int GetMinutes() const;
    int GetSeconds() const;

    Time operator + (int s) const {
        return Time(hours, minutes, seconds + s);
    }

    Time& operator += (int s) {
        seconds += s;
        Normalize();
        return *this;
    }

    void AddSeconds(int s) {
        seconds += s;
    }
};

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

    std::cout << t.GetHours() << ":" << t.GetMinutes() << ":" << t.GetSeconds() << "\n";

    t += 40;

    std::cout << t.GetHours() << ":" << t.GetMinutes() << ":" << t.GetSeconds() << "\n";

    Time t2 = t + 20;

    std::cout << t.GetHours() << ":" << t.GetMinutes() << ":" << t.GetSeconds() << "\n";
    std::cout << t2.GetHours() << ":" << t2.GetMinutes() << ":" << t2.GetSeconds() << "\n";

    return 0;
}
