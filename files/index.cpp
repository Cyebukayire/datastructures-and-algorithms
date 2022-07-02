#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream data;
    data.open("data.txt", ios::in | ios::out | ios::app);
    if (!data)
    {
        cout << "file doesn't exist" << endl;
    }
    else
    {
        cout << "file opened successfully" << endl;
        data << "Learning File Handling";
        // data.open("data.txt", ios::in);
        // char x;
        // while (1)
        // {
        //     data >> x;
        //     if (data.eof())
        //     {
        //         break;
        //     }
        //     cout << x;
        // }
    }
    data.close();
    return 0;
}