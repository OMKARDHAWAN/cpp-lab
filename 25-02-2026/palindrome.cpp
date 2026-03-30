#include <iostream>
using namespace std;
int main(){
 int num,reverse = 0,reminder,original;
 
 cout << "Enter number to check it is palindrome or not :";
 cin >> num;
 original = num;
 while(num != 0){
	 reminder = num % 10;
	 reverse = reverse * 10 + reminder;
	 num = num / 10;
	 
 }
 
 if(original == reverse){
	 cout << "Number is palindrome" << endl;
 }else{
     cout << "Number is not palindrome" << endl;
 }
 
 
 return 0;
}