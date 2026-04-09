#include <iostream>
using namespace std;
int main()
{
    string name = "JOHN";

    string name2 = "JOHN";
    // copy
    // cout << name2 << endl;

    // //length of string
    // cout << "length of the string :" << endl;
    // cout << name.length() ;
    int len = name.length();
    for (int i = len - 1; i >= 0; i--)
    {
        cout << name[i];
    }

    if (name == name2)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    string newstring = name.substr(0,3);
    cout << newstring;
    // compare string 

    return 0;
}