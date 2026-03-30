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


    // for(int i = 0 ; i < n ; i ++){
    //     for(int j = 1 ; j < i ; j++){
    //      cout << j;
    //     }
    //     cout << "\n";  
    // }

    // for(int a = 1 ; a <= n ; a++ ){
    // //  for(int b = 1 ; b <=a ; b++ ){
    // //  cout << " ";    
    // //   }

    //   for(int c = n-1 ; c >= a ; c--){
    //     cout << c;
    //   }
    //   cout << "\n";
    //  }
    
    return 0;
}