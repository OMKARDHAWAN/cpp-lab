
// operator overloading
#include <iostream>
#include <fstream>

using namespace std;
// stl
int main()
{  
    int n = 5;
    char ch = 'a';
    int num = 1;
    // 0 1 2 3 4 
    for(int i = 0 ; i < n ;i++){
    //   for space 
        for(int j = n-1 ; j > i ; j--){
            cout << " ";
        }
        for(int k = 1 ; k <= i +1 ; k++ ){
        if(i % 2 == 0){
           cout << ch << " ";
           ch++;
        }else{
            cout << num << " ";
            num++;
        }
        }
        cout << "\n";
    }
    return 0;
}