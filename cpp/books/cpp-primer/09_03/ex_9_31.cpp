#include <forward_list>
#include <iostream>
#include <list>
#include <vector>

using std::forward_list;
using std::list;
using std::vector;

void dublicate_odd_vector(vector<int> &v)
{
    vector<int>::const_iterator i = v.cbegin();
    while(i != v.cend()) {
        if (*i % 2) {
            i = v.insert(i, *i);
            i += 2;
        } else
            i = v.erase(i);
    }
}

void dublictate_odd_forward_list(forward_list<int> &v)
{
    forward_list<int>::const_iterator p = v.cbefore_begin();
    forward_list<int>::const_iterator i = v.cbegin();
    while(i != v.cend()) {
        if (*i % 2) {
            i = v.insert_after(p, *i);
            // std::list::iterator is LegacyForwardIterator
            // to increment it we need use std::advance operator
            // https://en.cppreference.com/w/cpp/iterator/advance
            std::advance(i, 2);
            std::advance(p, 2);
        } else
            i = v.erase_after(p);
    }
}

void dublicate_odd_list(list<int> &v)
{
    list<int>::const_iterator i = v.cbegin();
    while(i != v.cend()) {
        if (*i % 2) {
            i = v.insert(i, *i);
            // std::list::iterator is LegacyBidirectionalIterator
            // to increment it we need use std::advance operator
            // https://en.cppreference.com/w/cpp/iterator/advance
            std::advance(i, 2);
        } else
            i = v.erase(i);
    }
}

int main()
{
    vector<int> vi = {0,1,2,3,4,5,6,7};
    forward_list<int> fli {0,1,2,3,4,5,6,7};
    list<int> li {0,1,2,3,4,5,6,7};

    // dublicate_odd_vector(vi);
    dublictate_odd_forward_list(fli);
    // dublicate_odd_list(li);

    for (int i : fli)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
