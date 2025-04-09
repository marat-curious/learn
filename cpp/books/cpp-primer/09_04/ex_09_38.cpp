#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::vector;

void print(vector<int> &iv)
{
    cout << "size: " << iv.size() << ", capacity: " << iv.capacity() << endl;
}

int main()
{
    vector<int> ivec;

    print(ivec);

    for (int i = 0; i != 2; i++) {
        ivec.push_back(i);
    }

    print(ivec);

    for (int i = 0; i != 7; i++) {
        ivec.push_back(i);
    }

    print(ivec);

    return 0;
}
