#include <iostream>
using namespace std;
int fn(int n)
{
    if (n == 1)
        return 1;
    if (n == 0)
        return 0;
    return fn(n - 1) + fn(n - 2);
}
int main()
{
    cout << fn(5) << endl;
    return 0;
}
