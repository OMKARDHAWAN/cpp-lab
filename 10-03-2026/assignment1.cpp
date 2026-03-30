#include <iostream>
using namespace std;
int main()
{
  // print diamond pattern
  int n = 4;
  //
  for (int i = 1; i <= n; i++) // 0 1 2 3
  {
    // for gaph
    for (int j = n ; j > i ; j--)
    {
      cout << " ";
    }
    //
    for(int k = 1 ; k <= i ; k++){
      cout << k;
    }

    for(int a = i - 1 ; a >= 1 ; a--){
      cout << a;
    }
    
    cout << "\n";
  }

  for(int a = 1 ; a <= n ;a++){
    for(int b = 1 ; b <=a ; b++ ){
     cout << " ";
    }
    for(int c = 1 ; c <= n- a ; c++ ){
     cout << c;
    }
    for(int d = n - a - 1 ; d >=1 ; d-- ){
     cout << d;
    }
    cout << "\n";
  }

  return 0;
}