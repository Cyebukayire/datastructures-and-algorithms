#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> vector1 = {1, 2, 3, 4, 5};
    for (const int &i : vector1)
    {
        cout << i << endl;
    }
    vector1.push_back(23);
    for (const int &i : vector1)
    {
        cout << i << ", ";
    }
    cout << endl
         << endl;
    vector1[5] = 200;
    cout << "number at index 3 is: " << vector1.at(3) << endl;
    cout << "number at index 5 is: " << vector1[5] << endl;
    vector1.pop_back();
    cout << "\nFinal arr:" << endl;
    for (int i : vector1)
    {
        cout << i << ", ";
    }
    cout << "\n\nThe front is: " << vector1.front() << " and The back is: " << vector1.back();
    cout << endl
         << endl;

    return 0;
}

// g++ -std=c++17