// Fibonacci is a function that returns the sum of all numbers less than the original number

#include <iostream>
using namespace std;
int findFibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return findFibonacci(n - 1) + findFibonacci(n - 2);
    }
}
int main()
{
    cout << "\nFibonacci => " << findFibonacci(5) << endl
         << endl;
}