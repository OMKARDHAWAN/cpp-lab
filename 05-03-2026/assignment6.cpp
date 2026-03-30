#include <iostream>
using namespace std;

class Area{
 int side,length,breadth,area;
 public:
 void add(int side){
  area = side * side;
  cout << "Area of sqaure : " << area  <<"\n";
 };
 
 void add(int length , int breadth){
  area = length * breadth;
  cout << "Area of recatangle :" << area << "\n";
 };
 
 
};

int main(){

 Area A1;
 A1.add(4);
 A1.add(10,20);

return 0;
}