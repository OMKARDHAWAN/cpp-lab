#include <iostream>
using namespace std;

int main(){
 int num,reverse = 0 ,reminder,original;
 
 cout << "Enter number :";
 cin >> num;
 
 original = num;
 
 while(num != 0){
  reminder = num % 10;
  reverse = reverse * 10 + reminder;
  num = num / 10;
 };
 cout << "Inserted Number :" << original << "\n"; 
 cout << "Reverse number : " << reverse; 
 
 return 0;
}
