#include <iostream>
using namespace std;

void printStars(int n, int max)
{
    for (int i = 0; i < n; i++)
    {
        cout << "*";
    }
    cout << endl;
    if (n == max)
    {
        return;
    }
    printStars(n + 1, max);
}

int main()
{
    printStars(1, 5);
    return 0;
}