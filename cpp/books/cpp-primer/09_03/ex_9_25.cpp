#include <iostream>
#include <list>

int main()
{
    std::list<int> lst = {0,1,2,3,4,5,6,7,8,9};

    // auto elem1 = lst.begin();
    auto elem1 = lst.end();
    auto elem2 = elem1;

    elem1 = lst.erase(elem1, elem2);

    std::cout << *elem1 << std::endl;

    for (auto i : lst)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
