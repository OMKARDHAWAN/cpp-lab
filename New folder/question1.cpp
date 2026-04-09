#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int num = 1;
    
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = n - 1; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        for (int l = 1 ; l <; l++)
        {
            cout << l;
        }
        
        cout << "\n";
    }
    return 0;
}