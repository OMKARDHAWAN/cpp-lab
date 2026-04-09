#include <iostream>
using namespace std;

void add(int a= 10 , int b = 20);

int main(){
 add();
 add(50);
 add(10,20);
 return 0;
}

void add(int a,int b){
 int sum;
 sum = a + b;
 cout << "Sum of two element :" << sum << "\n";
}