#include <iostream>
using namespace std;
int main(){
 int count = 0 , num=2 , isPrime;
 
 while(count < 25){
  isPrime = 1;
  for(int i = 2 ; i < num ; i++){
   if(num % i == 0){
    isPrime = 0;
	break;
   }
  };
  
  if(isPrime == 1){
  cout << num << "\n";
  count++;
  }
  num++;
 }
 
 return 0;
}