#include <iostream>
using namespace std;

int main()
{

    int array[5];
    int key;
    int len = sizeof(array[5]) / sizeof(array[0]);

    // cout << "Enter element to search in array :" << "\n";
    // cin >> key;

    for (int i = 0; i < len; i++)
    {
        cin >> array[i];
    };

    // for (int i = 0; i < len; i++)
    // {
    //     for(int j = 0 ; j < len - i ; j ++){
    //          if(array[i] > array[j]){
    //             int temp = array[i];
    //             array[i] = array[j];
    //             array[j] = temp;
    //          } 
    //     }
        
    // }

    cout << "Sorted Array with bubble sort :  " << "\n";
    for (int i = 0; i < len; i++)
    {
        cout << array[i];
    };

    return 0;
};
