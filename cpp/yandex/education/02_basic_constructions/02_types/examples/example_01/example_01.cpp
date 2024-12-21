#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    double sm;
    cin >> sm;

    double result = sm / 2.54;

    cout << fixed << result << "\n";

    return 0;
} 
