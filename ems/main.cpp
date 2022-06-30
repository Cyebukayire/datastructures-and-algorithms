#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    string username;
    string email;

    Employee *next;
};

// void viewEmployees(Employee head)
// {
//     while (head != NULL)
//     {
//         cout << head->username << endl;
//         head = head->next;
//     }
// }

// void createEmployeeOnEnd(Employee *head)
// {
//     Employee *newEmp1 = new Employee();
//     Employee *newEmp2 = new Employee();
//     newEmp1->id = 1;
//     newEmp1->username = "Kerie";
//     newEmp1->email = "kerie@gmail.com";

//     newEmp2->id = 2;
//     newEmp2->username = "Pretty";
//     newEmp2->email = "peace@gmail.com";

//     int counter = 0;
//     // while (head)
//     // {
//     //     head = head->next;
//     // }
//     // head->id = counter;
//     // head->newEmp;
//     head = newEmp1;
//     head->next = newEmp2;
//     head->next->next = NULL;
// }

int main()
{
    Employee *head = new Employee();
    while (1)
    {
        int choice;
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
            cout << "All Employees" << endl;
            break;
        case 2:
            cout << "Add a new Employee" << endl;
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
    }
    // createEmployeeOnEnd(head);
    cout << endl;
end:;
    return 0;
}