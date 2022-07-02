#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>

using namespace std;

const int maxrow = 20;
string empName[maxrow] = {};
string empID[maxrow] = {};

void openFile()
{
    string line;
    ifstream myfile("./employee.txt");
    if (myfile.is_open())
    {
        int x = 0;
        while (getline(myfile, line))
        {
            int l = line.length();
            empID[x] = line.substr(0, 3);
            empName[x] = line.substr(4, l - 4);
            x++;
        }
    }
}
void saveFile()
{
    ofstream myfile;
    myfile.open("./employee.txt");
    for (int x = 0; x < maxrow; x++)
    {
        if (empID[x] == "\0")
        {
            break;
        }
        else
        {
            myfile << empID[x] + "," + empName[x] << endl;
        }
    }
}
void viewEmployees()
{
    cout << "\n===========";
    cout << " EMPLOYEES ";
    cout << "===========\n";
    cout << "\nEmpID \t\t|\t\t EmpName\n";
    cout << "\t_______________________\n\n";
    for (int i = 0; i < maxrow; i++)
    {
        if (empID[i] == "\0")
        {
            break;
        }
        cout << empID[i] << "\t\t\t\t" << empName[i] << endl;
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
            cout << "Employee is created successfully." << endl;
            break;
        }
    }
}

void searchEmployee()
{
    string id;
    bool found = false;
    cin.ignore();
    cout << "\nEnter the employee ID: ";
    getline(cin, id);

    for (int i = 0; i < maxrow; i++)
    {
        if (empID[i] == id)
        {
            found = true;
            cout << "\nEmpID \t\t|\t\t EmpName\n";
            cout << "\t_______________________\n\n";
            cout << empID[i] << "\t\t\t\t" << empName[i] << endl;
            break;
        }
    }
    if (!found)
    {
        cout << "\nEmployee Not Found!\n\n";
    }
}
void deleteEmployee()
{
    string id;
    bool found = false;
    cin.ignore();
    cout << "\nEnter the employee ID: ";
    getline(cin, id);

    for (int i = 0; i < maxrow; i++)
    {
        if (empID[i] == id)
        {
            empID[i] = "";
            empName[i] = "";
            cout << "\nDeleted employee succefully!\n\n";
            break;
        }
    }
    if (!found)
    {
        cout << "\nEmployee Not Found!\n\n";
    }
}

void updateEmployee()
{
    string id, newID, newName;
    bool found = false;
    cin.ignore();
    cout << "\nWhat's the Employee ID? ";
    getline(cin, id);
    // Search
    for (int i = 0; i < maxrow; i++)
    {
        if (empID[i] == id)
        {
            found = true;
            cout << "\nEnter new employee ID: ";
            getline(cin, newID);
            cout << "\nEnter new employee Name: ";
            getline(cin, newName);
            empName[i] = newName;
            empID[i] = newID;
            cout << "\n\nEmployee Updated Successfully\n\n";
            viewEmployees();
            break;
        }
    }
    if (!found)
    {
        cout << "\nEmployee Not Found!\n\n";
    }
}

int main()
{
    openFile();
    int choice;
    do
    {
        cout << "\n\nWELCOME TO EMS\n"
             << "\n MENU \n\n";
        cout << "1. View employees\n"
             << "2. Add new employee\n";
        cout << "3. Update an employee\n"
             << "4. Delete an employee\n"
             << "5. Search for an employee\n";
        cout << "6. Quit"
             << endl;
        cout << "\nChoose: ";
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
            updateEmployee();
            break;
        case 4:
            deleteEmployee();
            break;
        case 5:
            searchEmployee();
            break;
        case 6:
            cout << "Exiting ..." << endl;
            goto end;
            break;
        default:
            cout << "Invalid input" << endl;
            break;
        }
    } while (choice != 6);
    cout << endl;
end:;
    saveFile();
    return 0;
}