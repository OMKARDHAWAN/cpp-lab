#include <iostream>
using namespace std;
int main(){
    int n;

    cout << "Enter value of n :"<< "\n";
    cin >> n;
    for(int i = 0 ; i < n ; i++){
       //for space 
       for(int j = n - 1 ; j > i ; j--){
        cout << " ";
       }
       for(int k = 0 ; k <= i ; k++){
        cout << "*";
       }
       for(int l = 0 ; l < i ; l++){
       cout << "*";
       }
       cout << "\n";
     }


     for(int a = 0 ; a < n ; a++){
        for(int b = 0 ; b <= a ; b++){
           cout << " ";
        }
        for(int c = n-1 ; c > a ; c--){
            cout << "*";
        }
        for(int d = n-2 ; d > a ; d--){
            cout << "*";
        }
        cout << "\n";
     }


    return 0;
}