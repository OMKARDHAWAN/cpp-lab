#include <iostream>
using namespace std;
class student{
 int rollno,day,month,year,totalMarks;
 public:
 student(){
  rollno = 0;
  day = 0;
  month = 0;
  year = 0;
  totalMarks = 0;
 }
  
 student(int r,int d,int m,int y, int t){
  rollno = r;
  day = d;
  month = m;
  year = y;
  totalMarks = t;
  
  cout << "Student Data : "<< "\n";
  cout << "Roll no : " << rollno << "\n" ;
  cout << "Date of Birth : " << day << "/" << month << "/" << year << "\n" ;
  cout << "totalMarks :" << totalMarks << "\n \n";
 } 
};


int main(){
 student s1(1,1,02,2026,100),s2(2,2,02,2026,200),s3(3,3,02,2026,300),s4(4,4,02,2026,400),s5(5,5,02,2026,500),s6(6,6,02,2026,600),s7(7,7,02,2026,700),s8(8,8,02,2026,800),s9(9,9,02,2026,900),s10(10,10,02,2026,600);
 return 0;
}