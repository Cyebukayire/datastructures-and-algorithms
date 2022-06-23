// #include <sctdlib>
#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = a++;
    b = 8034;
    cout << (b >> 3) << endl
         << a << endl;
    int x = 0b010101101;
    int y = 0b00110010;
    cout << x << endl;
    cout << x + y << endl;
    return 0;
    // return EXIT_SUCCESS
}