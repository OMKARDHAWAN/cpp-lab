#include <iostream>
using namespace std;

int main(){
 int num ,sum = 0,original,reminder;
 
 cout << "Enter number :";
 cin >> num;
 
 original = num;
 
 while(num != 0){
  reminder = num % 10;
  sum = sum + reminder;
  num = num / 10;
 };
 
 cout << "Sum of digit of number : " << sum; 
 
 return 0;
}