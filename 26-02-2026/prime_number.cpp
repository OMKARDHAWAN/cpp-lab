#include <iostream>
using namespace std;

//to check wheather number is prime or not;
int main(){
int num;

cout << "Enter the number :";
cin >> num;

for(int i = 2 ; i < num ; i++){
 if(num % i == 0){
  cout << "Number is not prime";
  return 0;
 }
};
cout << "Number is prime number ";

return 0;

}