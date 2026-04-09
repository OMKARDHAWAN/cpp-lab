#include <iostream>
using namespace std;
// Q.1. Given an integer N, print numbers from 1 to N.
// But:
//  If a number is divisible by 3, print Fizz
//  If divisible by 5, print Buzz
//  If divisible by both 3 and 5, print FizzBuzz
//  Otherwise print the number.
// Input:
// 15
// Output:
// 1
// 2
// Fizz
// 4
// Buzz
// Fizz
// 7
// 8
// Fizz
// Buzz
// 11
// Fizz
// 13
// 14
// FizzBuzz
int main()
{

    int n;

    cout << "Enter the integer n :" << "\n";
    cin >> n;
    int num = 1;
    while (num < n)
    {
        if (num % 3 == 0 && num % 5 == 0)
        {
            cout << "FizzBuzz" << "\n";
        }
        else if (num % 3 == 0)
        {
            cout << "Fizz" << "\n";
        }
        else if (num % 5 == 0)
        {
            cout << "Buzz" << "\n";
        }
        else
        {
            cout << num << "\n";
        }
       num++;
    }

    return 0;
}