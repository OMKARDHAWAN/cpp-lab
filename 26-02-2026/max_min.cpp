#include <iostream>
using namespace std;
int main(){
 int array[5];
 int max,min;
 cout << "Enter number in array :";
 for(int i = 0 ; i < 5 ; i++){
  cin >> array[i];
 }
 
 max= array[0];
 
 for(int j = 0 ; j < 5 ; j++){
 if(max < array[j]){
  max = array[j];
 }
 };
  
 cout << "Maximum number in array is :"<< max << "\n"; 

 min= array[0];
 
 for(int j = 0 ; j < 5 ; j++){
 if(min > array[j]){
  min = array[j];
 }
 };
  
 cout << "Minimum number in array is :"<< min << "\n";
 
 
 return 0;
}