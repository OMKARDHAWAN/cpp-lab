#include <iostream>
using namespace std;
int main(){
 int num,reverse = 0,reminder,original;
 cout << "Enter number to check palindrome or not:";
 cin >> num;
 original = num;
 while(num != 0){
  reminder = num % 10;
  reverse = reverse * 10 + reminder;
  num = num / 10;
 }
 
 if(original == reverse){
  cout << "number is palindrome";
 }else{
 cout << "Number is not palindrome";
 }
 
 return 0;
}