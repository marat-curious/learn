#include <iostream>
#include <string>

int main()
{
    int score;
    std::string grade;
    while(std::cin >> score) {
        // grade = score > 90 ? "high pass" : score > 75 ? "pass" : score > 60 ? "lower pass" : "fail";

        if (score > 90)
            grade = "high pass";
        else if (score > 75)
            grade = "pass";
        else if (score > 60)
            grade = "lower pass";
        else
            grade = "fail";

        std::cout << grade << std::endl;
    }

    return 0;
}
