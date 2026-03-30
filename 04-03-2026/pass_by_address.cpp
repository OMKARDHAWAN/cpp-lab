#include <iostream>
using namespace std;

void swap(int* p,int* q);

int main(){
 // pass by address;
 // we send address of actual variable as parameter;
 int a = 10;
 int b = 20;
 
 
 
 cout << "Value of a before swap : " << a << endl;
 cout << "Value of b before swap : " << b << endl;	
 
 swap(&a,&b);
 
 cout << "Value of a after calling swapping function :" << a << "\n";
 cout << "Value of b after calling swapping function : " << b << "\n";
 
 
 return 0;
};



void swap(int* p,int* q){
   int* temp ;
   temp = p;
   p = q;
   q = temp;

 cout << "value of p after swapping : " << *p << "\n";
 cout << "value of q after swapping : " << *q << "\n";
   
 };