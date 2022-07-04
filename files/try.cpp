#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;
struct User
{
    string name;
    int age;
    string title;
};

int main()
{
    vector<User> users;
    fstream file;
    file.open("users.txt", ios::in);
    if (file.is_open())
    {
        string line;
        while (getline(file, line))
        {
            User user;
            stringstream ss(line);
            int k = 1;
            string substr;
            while (ss.good())
            {
                getline(ss, substr, ',');
                if (k == 1)
                {
                    user.name = substr;
                }
                else if (k == 2)
                {
                    user.age = stoi(substr);
                }
                else if (k == 3)
                {
                    user.title = substr;
                }
                k++;
            }
            users.push_back(user);
        }
    }

    for (User user : users)
    {
        cout << "\n\n- USER - \n"
             << "Name: " << user.name << endl
             << "Age: " << user.age << endl
             << "Title: " << user.title << endl;
    }
}