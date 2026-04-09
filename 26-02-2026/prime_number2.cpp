#include <iostream>
using namespace std;
int main(){
 int isPrime,temp;
 
 cout << "Prime number between 2 to 25 are :" << "\n";
 for(int i = 2 ; i <= 25 ; i++){
 isPrime = 1;
 temp = i;
 for(int j = 2 ; j < temp ; j++){
   if(temp % j == 0){
    isPrime = 0;
	break;
   }
  };
  
  if(isPrime == 1){
      cout << temp << "\n";
  }
 
 }
 return 0;
};
