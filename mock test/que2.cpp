#include <iostream>
#include <string.h>
using namespace std;


int main(){

    char array[] = {'a','b','c','d','e','f','g','h','i'};
    // int numberArray[] = {1,2,3,4,5,6,7,8,9,10,11,12};

     int len = sizeof(array[len])/sizeof(array[0]);

    for(int i = 0 ; i < 6 ; i++){
        for(int j = i ; j < array[len] ; j ++ ){
            cout << array[j];
        }
        cout << "\n";
    }
    return 0;
}