#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        // for space
        for (int j = n - 1; j > i; j--)
        {
            cout << " ";
        }
        // for star
        for (int k = 0; k <= i; k++)
        {
            cout << "*";
        }

        for (int l = 0; l < i; l++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    for (int a = 0; a < n; a++)
    {
        // for space
        for (int b = 0; b <= a; b++)
        {
            cout << " ";
        }
        for (int c = n-1; c > a; c--)
        {
            cout << "*";
        }
         for (int c = n-2; c > a; c--)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}