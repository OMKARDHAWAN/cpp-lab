#include <iostream>
using namespace std;
int main()
{
    // simple pyramid
    int n = 5;

   for(int i = 0 ; i < n ; i++){
    int val = 1;
    for(int k = n-1 ; k >= i ; k--){
        cout << " ";
    } 
    for(int j = 0 ; j <= i ; j++){
        cout << val << " ";
        val = val * (i-j)/(j+1);
    }
    cout << "\n";
   }


    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "*";
    //     }

    //     for (int k = n - 1; k > i; k--)
    //     {
    //         cout << " ";
    //     }

    //     for (int k = n - 1; k > i; k--)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }

    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = n-2; j >= i; j--)
    //     {
    //         cout << "*";
    //     }

    //     for (int k = 0; k <= i; k++)
    //     {
    //         cout << " ";
    //     }

    //     for (int k = 0; k <= i; k++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = n-2; j >= i; j--)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int k = 0; k <= i; k++)
    //     {
    //         cout << " ";
    //     }
    //     for(int j = n - 1; j >= i; j--)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }
    return 0;
}