#include <iostream>
using namespace std;

template <class T>

class A{
    public:
    T a;
    T b;
    T sum;
    A(T x,T y){
       a = x;
       b = y;    
    }
    
    void add(){
        sum = a + b;
        cout << "sum of a and b is " << sum << "\n";
    }



};


int main(){

    A<int> d(2,1);
   d.add();
   return 0;
}