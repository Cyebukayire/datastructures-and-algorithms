#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers = {12, 34, 45, 42};
    vector<string> strings = {"Kellia, Honorine, Jojo, Alice, Kerie"};
    for (int i : numbers)
    {
        cout << i << ", ";
    }
    for (string i : strings)
    {
        cout << i << endl;
    }
    cout << endl;

    return 0;
}