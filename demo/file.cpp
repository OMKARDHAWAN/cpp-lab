#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <unordered_map>
#include <list>
using namespace std;
class Student
{
    int id;
    string name;
    //   vector <pair<int,string>> StudentV;
    // map<int, string> StudentMap;
    // unordered_map<int, string> StudentMap;
    list<int> StudentList;

public:
    Student()
    {
        id = 0;
        name = "";
    }

    void input()
    {
        cout << "Enter id :" << "\n";
        cin >> id;
        cout << "Enter name :" << "\n";
        cin >> name;

        StudentList.push_front(id);
        // StudentList.push_front(name);
    }

    void display()
    {
        for (auto itr : StudentList)
        {
            cout << itr;
        }
    }

    void save()
    {
        ofstream fout("Student.txt");
        fout << id << "\t";
        fout << name << "\t";
    };
};
int main()
{

    Student S;
    S.input();
    S.input();
    S.input();
    S.display();
    S.save();
    return 0;
}