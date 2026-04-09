#include <iostream>
using namespace std;
int main(){
  int num,original,sum = 0,reminder;
  
  cout << "Enter number to check either number is armstrong or not : ";
  cin >> num;
  
  original = num;
  
  while(num != 0){
   reminder = num % 10;
   sum = sum + reminder * reminder * reminder ;
   num = num /10;
  }
  
  if(original == sum){
   cout << "Given Number is  Armstrong number ";
  }else{
   cout << "Given number is not Armstrong number ";
  }
   
   
  
  
 return 0;
}