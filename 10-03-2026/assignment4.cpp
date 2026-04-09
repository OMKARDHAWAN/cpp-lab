#include <iostream>
using namespace std;
class Calculator{
 int num1,num2,option;
 int result; 
 public:
 Calculator(){
 num1 = 0;
 num2 = 0;
 option = 0;
 result = 0;
 }
 
 
 void performOperation(){
	 

  switch(option){
  case 1:
  result = num1 + num2;
  cout << "Sum of the num1 and num2 : " << result << "\n"; 
  break;
   
  case 2 :
  result = num1 - num2;
  cout << "Subraction between the num1 , num2 : " << result <<  "\n" ;
  break;
   
  case 3 : 
  result = num1 * num2;
  cout << "Multiplication between num1 , num2 : " << result << "\n";
  break;	

  case 4:
  result = num1/num2;
  cout << "Dividation between num1,num2 : " << result << "\n";
   break;
   
  case 5 :
  cout << "Ente the number to check Square : " << "\n";
  cin >> num1;
  result = num1 * num1;
  cout << "Square of the given num is : " << result << "\n";    
  break; 
   default:
   cout << "Invalid data";
  }
	 
 } 


 void setNumber(){
 cout << "Enter the first number :";
 cin >> num1;
 cout << "Enter the second number : ";
 cin >> num2; 
 
 
 cout << "Choose Operation Below to Perform: " << "\n\n";
 cout << "For Addition Enter 1 "<< "\n\n" ;
 cout << "For Subraction Enter 2 " << "\n\n" ;
 cout << "For Multiplication Enter 3 " << "\n\n" ;
 cout << "For Dividation Enter 4 "<< "\n\n" ;
 cout << "To Find Square Enter 5 " << "\n\n" ;
 
 cin >> option;
 };

 
 
};

int main(){
 
 Calculator C1;
 C1.setNumber();
 C1.performOperation();
 
 return 0;
}