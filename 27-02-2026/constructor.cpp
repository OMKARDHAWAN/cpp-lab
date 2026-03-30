#include <iostream>
using namespace std;

class DateChange{

int date , month , year;
public: 
 // no-argument constructor;
 DateChange(){
  date = 25;
  month = 02;
  year = 2026;
 }
 
 // parameterised constructor;
 DateChange(int a,int b , int c){
	 date = a;
     month = b;
     year = c;	 
 }
 
  void display(){
  cout << date << "/" << month << "/" << year << "\n";
  }
};

int main(){
 DateChange d1 ,d2(27,02,2026);
 d1.accept();
 d1.display();
 d2.display();
 return 0;
}