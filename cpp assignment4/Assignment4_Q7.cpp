

// PROGRAM 7 

// Write a program in C++ to define a recursive and a non-recursive function for
// computing sum of digits of a given integer n of any size

#include <iostream>
using namespace std;

// returns sum of digits(without recursion)
long long sumOfDigits(long long num){

    long long sum = 0;
    while(num != 0){
        int rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    return sum;
}

// returns sum of digits(recursive approch)
long long  recSumOfDigits(long long num){

    // Base Case
    if(num == 0){
        return 0;
    }

    // Recursive Cases
    long long sum = 0;
    sum = num % 10;
    return sum + recSumOfDigits(num/10);
}

// Driver Code /////////////////////////////////////
int main()
{
    cout << "Enter a number...\n";
    long long number; 
    cin >> number;

    cout << "Sum without recursion : " << sumOfDigits(number) << endl;
    cout << "Sum with recursion : " << recSumOfDigits(number) << endl;

    return 0;
}