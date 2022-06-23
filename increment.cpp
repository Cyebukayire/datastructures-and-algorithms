#include <iostream>
using namespace std;
int main()
{
    int x = 5, y = 5, z, k;
    cout << "x: " << x << endl;
    x = ++x;
    cout << "x: " << x << endl;
    y = --y;
    // k = ++x;
    cout << "y: " << y << endl;
    // cout << "x + ++x: " << x << " + " << k << endl;
    z = x + ++x;
    cout << "z: " << z << endl;
    return 0;
}