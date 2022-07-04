#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string line;
    cout << "Enter a string: ";
    getline(cin, line);
    reverse(line.begin(), line.end());
    cout << line << endl;
    return 0;
}