#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

struct User
{
    int id;
    string full_name;
    string username;
    int age;
};

int next_id()
{
    int id = 1;
    fstream file;
    file.open("users.txt", ios::in);
    string line;
    while (getline(file, line))
    {
        stringstream ss(line);
        string id_as_string;
        getline(ss, id_as_string, ',');
        id = stoi(id_as_string) + 1;
    }
    return id;
}

void insert_in_file(User user)
{
    user.id = next_id();
    fstream file;

    file.open("users.txt", ios::out | ios::app);

    file << user.id << "," << user.full_name << "," << user.username << "," << user.age << "\n";
    file.close();
}

vector<User> get_all_users()
{
    vector<User> users;

    fstream file;
    file.open("users.txt", ios::in);

    string line;
    while (getline(file, line))
    {
        User user;
        stringstream ss(line);
        int k = 0;
        string substr;

        while (ss.good())
        {
            getline(ss, substr, ',');
            if (k == 0)
                user.id = stoi(substr);
            else if (k == 1)
                user.full_name = substr;
            else if (k == 2)
                user.username = substr;
            else if (k == 3)
                user.age = stoi(substr);
            k++;
        }

        users.push_back(user);
    }
    return users;
}

void delete_by_id(int id)
{
    vector<User> users = get_all_users();
    fstream file;
    file.open("temp_users.txt", ios::out | ios::trunc);

    for (User user : users)
    {
        if (user.id != id)
        {
            file << user.id << "," << user.full_name << "," << user.username << "," << user.age << "\n";
        }
    }
    remove("users.txt");
    rename("temp_users.txt", "users.txt");
}

void update_user(User data)
{
    vector<User> users = get_all_users();
    fstream file;
    file.open("temp_users.txt", ios::out | ios::trunc);

    for (User user : users)
    {
        if (user.id != data.id)
        {
            file << user.id << "," << user.full_name << "," << user.username << "," << user.age << "\n";
        }
        else
        {
            file << data.id << "," << data.full_name << "," << data.username << "," << data.age << "\n";
        }
    }
    remove("users.txt");
    rename("temp_users.txt", "users.txt");
}

int main()
{
    // vector<int> account_details;
    User user{11, "Gisa Ket", "gisa", 13};
    // insert_in_file(user);
    // delete_by_id(6);
    update_user(user);

    vector<User> users = get_all_users();
    // cout << users.at(7).age << endl;
    for (User user : users)
    {
        cout << "\n- USER -\n Id: " << user.id << endl
             << "Fullname: " << user.full_name << endl
             << "Username: " << user.username << endl
             << "Age: " << user.age << endl;
    }

    return 0;
}