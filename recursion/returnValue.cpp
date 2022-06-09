#include <iostream>
using namespace std;
int fn(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (1 + fn(n - 1));
    }
}
int main()
{
    cout << fn(5) << endl;
    return 0;
}