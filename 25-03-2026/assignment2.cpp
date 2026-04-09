#include <iostream>
using namespace std;
// Q.2. Find Second Largest Number
// Given N numbers, find the second largest number.
// Input:
// 5
// 10 4 8 20 15
// Output:
// 15
int main()
{
    int n;
    cout << "Enter how many element you have to insert in array :" << "\n";
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int largest = array[0];
    int secondlargest = -1;

    for (int i = 0; i < n; i++)
    {
        if (array[i] > largest)
        {
            secondlargest = largest;
            largest = array[i];
        }
        else if (array[i] > secondlargest && array[i] != largest)
        {
            secondlargest = array[i];
        }
        cout << array[i] << "\t";
        cout << "\n";
    }

    cout << "Second largest element is :" << secondlargest << "\n";

    return 0;
}
