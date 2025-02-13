#include <iostream>
#include <vector>

using std::vector;

void print_vector(vector<int>::iterator b, vector<int>::iterator e)
{
    #ifndef NDEBUG
        std::cout << "vector size: " << (e - b) << std::endl;
    #endif
    if (b != e) {
        std::cout << *b << std::endl;
        print_vector(++b, e);
    }
}

int main()
{
    vector<int> v{0,1,2,3,4,5,6,7,8,9};
    print_vector(v.begin(), v.end());
    return 0;
}
