///*Q.4. Write a program to Print Fibonacci series
//Given an integer N, print the first N Fibonacci numbers.
//The Fibonacci sequence is:
//0 1 1 2 3 5 8 13 ...
//Input:
//6
//Output:
//0 1 1 2 3 5*/
//


#include<iostream>
using namespace std;


int main(){
	
	int a =0;
	int b = 1;
	 int temp;
	 int n;
	    cout << "Enter the value of N to print Fibonacci Series : ";
	 	cin>>n;
	 	cout<<a << " ";
	 	cout<<b << " ";
	 
	 for(int i =0; i<n; i++){
	 	temp= a+b;
	 	a =b;
	 	b=temp;
	 
	 	cout<<temp<<" ";
	 }
	
	
	
}
