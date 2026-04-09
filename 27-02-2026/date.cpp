#include <iostream>
using namespace std;
class MyDate{
 int day,month,year;
 public:
 void accept(){
  cout << "Accept day month and year \n";
  cin >> day >>month >> year;
 }
 
 void display(){
	 cout << "date is "<< day << "/" << month << "/" << year << endl;
 }
 void setDay(int d){
	 cout << "setter function is called\n";
	 day = d;
 }
 int getDate(){
	 return day;
 }
 
 void setMonth(int m){
	 cout << "setter function is called\n";
	 month = m;
 }
 int getMonth(){
	 return month;
 }
 
};
int main(){
 MyDate m1;
 m1.accept();
 m1.display();
 m1.setDay(27);
 int newDate = m1.getDate();
 cout << "Updated date is :"<< newDate <<"\n";
 m1.setMonth(04);
 int newMonth = m1.getMonth();
 cout << "Updated Month is :"<< newMonth << "\n";
return 0;
}