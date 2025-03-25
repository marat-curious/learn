#include <forward_list>
#include <iostream>

using std::forward_list;

int main()
{
    forward_list<int> fl = {0, 1, 2, 3, 4, 5, 6, 7};
    forward_list<int>::iterator prev = fl.before_begin();
    forward_list<int>::iterator curr = fl.begin();

    while(curr != fl.end()) {
        if (*curr % 2 == 0)
            curr = fl.erase_after(prev);
        else {
            prev = curr;
            ++curr;
        }
    }

    for (auto i : fl)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
