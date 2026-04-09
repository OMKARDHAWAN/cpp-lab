#include <iostream>
using namespace std;
int main(){
int array[5] = {1,2,3,4,5};
int even = 0,odd = 0;

for(int i = 0; i < 5 ; i ++){
 
 if(array[i] % 2 == 0){
 even++;
 }else{
 odd++;
 }
}
 
 cout << "Count of Even number in array is : " << even << "\n";
 cout << "Count of odd number in array is :" << odd << "\n";



  
 
return 0;
}