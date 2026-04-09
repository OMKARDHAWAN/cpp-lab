#include <iostream>
#include <string.h>
using namespace std;



class Demo{
  public : 
  int len;
  char* ptr;


  Demo(int l){
    len = l;
    ptr = new char[len];
    *ptr = 'A';
  }


   




  


  void display(){
  if(len == 1){
    cout << "Value of len" << len << "\n";
    cout << "Value of ptr" << *ptr << "\n";
  }else{
    cout << "len" << len << "\n";
    cout << "ptr value " << ptr << "\n";
  }
  }






};
int main(){


  return 0;
}
