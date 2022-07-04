#include <iostream>
#include <string>
#include <vector>

using namespace std;
struct User
{
    int age;
    string name;
};

int main()
{
    User user;
    cin.ignore();

    cout << "enter your age";
    getline(cin, user.age);
    // cin >> age;
    cout << "enter your name: ";
    getline(cin, user.name);
    return 0;
}