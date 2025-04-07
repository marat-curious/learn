#include <iostream> // for std::out and std::in

int main()
{
  std::cout << "Enter a number: "; // ask user for a number
  int x{}; // define variable x to hold user input (and value initialize it)
  std::cin >> x; // get number from keybord and store it in variable x
  std::cout << "You entered: " << x << '\n';
  return 0;
}
