#include <iostream>
using namespace std;
int main(){
 int n;
 int avg;
 int sum;
 int max,min;
 cout << "Enter the number : " << "\n";
 cin >> n;

 int *arr = new int[n];
 
 for(int i = 0 ; i <  n ; i++){
  cout << "Enter element in array :" <<"\n";
  cin >> arr[i] ;
 };
  
  
 max = arr[0];
 min=arr[0];
 
 
 for(int i = 0 ; i <  n ; i++){
  cout << arr[i] <<"  " << "\n";

 };
 
 
 for(int i = 0 ; i <  n ; i++){
  if(max < arr[i])
{
	max = arr[i];
 } };
  
  
   for(int i = 0 ; i <  n ; i++){
  if(min > arr[i])
{
	min = arr[i];
 } };
 
 for(int i=0; i<n;i++)
{
	sum = sum+arr[i];
  } 
   
   avg = sum/n;
  
cout<<"max element is ====>"<<max<<endl;
cout<<"min element is ====>"<<min<<endl;
cout<<"avg  is ====>"<<avg<<endl;
 
 delete[] arr;
 
  
 
  
 return 0;
}
