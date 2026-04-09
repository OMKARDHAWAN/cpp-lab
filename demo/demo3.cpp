#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

// Q.1. Accept 10 array elements from user. Sort the array in ascending order. Display sorted
// array.
// Create class SortArray. And use functions for
// 1. taking input from user
// 2. sorting array
// 3. display that sorted array

class Employee
{
    int empID;
    string name;
    double salary;
    string department;

   

public:
    Employee()
    {
        empID = 0;
        name = "";
        salary = 0;
        department = " ";
    }
    int getId()
    {
        return empID;
    }

    string getName()
    {
        return name;
    }

    void input()
    {
        try
        {
            cout << "\n";
            cout << "Enter Id of Emoloyee :" << "\n";
            cin >> empID;

            cout << " Enter Name of Empolyee" << "\n";
            cin >> name;

            cout << "Enter Department if Employee" << "\n";
            cin >> department;

            cout << "Enter salary of Employee " << "\n";
            cin >> salary;

            if (salary < 0)
            {
                throw "Salary cannot be negative";
            }
        }
        catch (const char *error)
        {
            cout << error;
        }
        cout << "\n";
    };
    void display()
    {
        ifstream fin("Employee.txt");
        string data;
        while (getline(fin, data))
        {
            /* code */
            cout << data;
            cout << "\n";
        }
    };
    int sortByName(Employee E[], int len)
    {
        sort(E, E + len, [](Employee a, Employee b)
             { 
                return a.getName() > b.getName(); 
            });
    };

    void sortById(Employee E[], int len)
    {
        sort(E, E + len, [](Employee a, Employee b)
             { return a.getId() > b.getId(); });
    }
    void save()
    {
        ofstream fout("Employee.txt", ios::app);
        fout << empID;
        fout << "\n";
        fout << name;
        fout << "\n";
        fout << department;
        fout << "\n";
        fout << salary;
        fout << "\n";

        fout.close();
        cout << "\nFile Saved successfully!!!" << "\n";
    };
};

int main()
{
    int n;
    cout << "Enter how many employee object you want to count!!" << "\n";
    cin >> n;
    Employee E[n];
    int len = sizeof(E) / sizeof(E[0]);

    while (true)
    {
        cout << "1.add new employee\n2.Display all employee\n3.sortbyName\n4.Sort by id \n5.save into file\n6.exit\n";
        int option;
        cout << "Enter option :" << "\n";
        cin >> option;
        cout << "\n";

        switch (option)
        {
        case 1:
            /* code */
            for (int i = 0; i < len; i++)
            {
                E[i].input();
            }
            break;
        case 2:
            /* code */

            E[0].display();

            break;

        case 3:
            /* code */

            E[0].sortByName(E,len);

            break;
        case 4:
            /* code */

            E[0].sortById(E,len);

            break;
        case 5:
            /* code */

            E[0].save();

            break;
        case 6:
            /* code */
            cout << "\nThanks for visiting !!!\n";
            exit(0);
            break;

        default:
            break;
        }
    }
    return 0;
}