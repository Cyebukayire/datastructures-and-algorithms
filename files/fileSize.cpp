#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{

    ifstream file, file2;
    // file2.open("binary.txt", ios::out);
    // file2 << "Hello\n";
    // file2.close();
    file.open("binary.txt", ios::binary);
    file.seekg(0, ios::end);
    int fileSize = file.tellg();
    cout << fileSize << endl;
    file.close();
    return 0;
}