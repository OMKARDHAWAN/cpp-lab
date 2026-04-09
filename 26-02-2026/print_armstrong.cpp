#include <iostream>
using namespace std;
int main(){
 int original ,reminder,temp,sum;
 
 for(int i = 0 ; i < 999 ; i++){
  
  original = i;
  temp = i;
  sum = 0;
  
  while(temp > 0){
   reminder = temp % 10;
   sum = sum + reminder * reminder * reminder;
   temp = temp / 10;
  };

   if(sum == original){
    cout << "Armstrong number between 0 to 999 : "  << sum << "\n";
   }
 };
 
 return 0;
}