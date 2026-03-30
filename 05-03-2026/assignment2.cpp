#include <iostream>
using namespace std;
int main(){
int largest;
int array[5] = {1,2,3,4,5};

largest = array[0];

for(int i = 0 ; i < 5 ; i++){
 if(largest < array[i]){
  largest = array[i];
 };
}

cout << "Largest element in array is : " << largest<<"\n";


return 0;
}