#include <iostream>
using namespace std;
int main(){
 int fact,temp;
  
 for(int i = 3 ; i <=10 ; i++){
	 temp = i;
	 fact = 1;
	 for(int i = 1 ; i <= temp ; i++){
  fact = fact * i;
 }
 cout << "Factorial of number : " << fact << "\n";	 
 };
 
 
 
return 0;
}