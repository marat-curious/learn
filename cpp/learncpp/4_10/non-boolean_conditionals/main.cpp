#include <iostream>

int main()
{
  if (5) // converted to Boolean
    std::cout << "hi\n";
  else
    std::cout << "bye\n";

  return 0;
}
