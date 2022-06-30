#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int maxrow = 20;
string empName[maxrow] = {};
string empID[maxrow] = {};

void viewEmployees()
{
    cout << "\n===========";
    cout << " EMPLOYEES" << endl;
    cout << "===========\n";
    cout << "\nEmpID ---- EmpName\n";
    for (int i = 0; i < maxrow; i++)
    {
        cout << empName[i] << "-------" << empID[i] << endl;
    }
}

void createEmployee()
{
    string name;
    string id;

    cin.ignore();
    cout << "\nEnter your ID: ";
    getline(cin, id);
    cout << "\nEnter your name: ";
    getline(cin, name);
    cout << endl;
    // cout << "Hello, " << name << ", you ID is: " << id << endl;

    for (int i = 0; i < maxrow; i++)
    {
        if (empID[i] == "\0")
        {
            empID[i] = id;
            empName[i] = name;
            cout << "Employee is created successfully.";
            break;
        }
    }
}

int main()
{
    int choice;
    do
    {
        cout << "\n\nWELCOME TO EMS\n"
             << "\n MENU \n\n";
        cout << "1. View employees\n"
             << "2. Add new employee\n";
        cout << "3. Update an employee\n"
             << "4. Delete an employee\n";
        cout << "5. Quit" << endl
             << endl;
        cout << "Choose: ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 1:
            viewEmployees();
            break;
        case 2:
            createEmployee();
            break;
        case 3:
            cout << "Update employee" << endl;
            break;
        case 4:
            cout << "Delete an Employee" << endl;
            break;
        case 5:
            cout << "QUITING..." << endl;
            goto end;
            break;
        default:
            cout << "Invalid input" << endl;
            break;
        }
    } while (choice != 6);
    cout << endl;
end:;
    return 0;
}