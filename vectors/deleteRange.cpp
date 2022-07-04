// CPP program to illustrate
// Implementation of erase() function
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myvector{1, 2, 3, 4, 5};
    vector<int>::iterator it1, it2;

    it1 = myvector.begin();
    it2 = myvector.end();
    it1 += 2;
    it2 -= 1;
    // it2--;

    myvector.erase(2, 2);

    // Printing the Vector
    for (auto it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it << endl;
    return 0;
}