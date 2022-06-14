#include <iostream>
using namespace std;

void starsDecreasing(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "*";
    }
    cout << endl;
    if (n == 0)
    {
        return;
    }
    starsDecreasing(n - 1);
}
void starsIncreasing(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "*";
    }
    cout << endl;
    if (n == 5)
    {
        return;
    }
    starsIncreasing(n + 1);
}
int main()
{
    starsDecreasing(5);
    starsIncreasing(0);
    return 0;
}