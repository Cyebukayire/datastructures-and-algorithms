#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream file;
    file.open("data.txt", ios::in);
    if (file.is_open())
    {
        int counter = 0;
        string line;
        while (getline(file, line))
        {
            counter++;
        }
        cout << "Number of lines: " << counter << endl;
    }
    file.close();
    return 0;
}