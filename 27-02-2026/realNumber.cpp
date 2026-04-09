#include <iostream>
using namespace std;
class realNumber{
 int real,img;
 public:
 void accept(){
  cout << "Accept value of real and img :";
  cin >> real >> img;
 
 };
 
 void display(){
	cout << real << "+" << img << "j" << "\n"; 
 }
 
 void setReal(int r){
	 cout << "Setter Function is called\n";
	 real = r;
 }
 
 int getReal( ){
	return real; 
 }
 
 void setImg(int i){
	 cout << "Setter Function is called\n";
	 img = i;
 }
 
 int getImg( ){
	return img; 
 }
 
};
int main(){
 realNumber r1;
 r1.accept();
 r1.display();
 r1.setReal(10);
 int newReal = r1.getReal();
 cout << "Updated real number is : " << newReal << "\n";
 r1.setImg(2);
 int newImg = r1.getImg();
 cout << "Updated imaginary number is : " << newImg << "\n";
 
 return 0;
}