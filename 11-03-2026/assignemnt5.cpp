#include <iostream>
using namespace std;
int main(){
 //swap two number without using third variable
 int a, b ;
 cin >> a;
 cin >> b;
 //a=10
 //b=20;

 
 cout << "value of a before swap is :" << a << endl;
 cout << "value of b before swap is :" << b << endl; 	
  
 a = a + b;
 b = a - b;
 a = a -b;

 cout << "value of a is :" << a << endl;
 cout << "value of b is :" << b << endl; 	
}
