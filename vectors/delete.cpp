#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {23, 34, 45, 45, 56};
    for (int i : vec)
    {
        cout << i << endl;
    }
    int delNum = 23;
    // vector<int>::iterator i = find(vec.begin(), vec.end(), 23);
    // vec.erase(23);
    // for (int i : vec)
    // {
    //     cout << i << endl;
    // }
    vector<int>::iterator iter1, iter2;
    iter1 = vec.begin();
    iter2 = vec.end();
    cout << vec.front() << ", " << vec.back() << endl;

    return 0;
}