

// PROGRAM 6 ////////////////////////////////////////////////////////////////////////

// Write a program using C++ to input an interger array of n elements by creating it
// using pointer, and define a function to input an index position, ‘pos’ of the array and
// prints number of elements on the left of ‘pos’ that are less than the element at ‘pos’,
// and number of elements on the right of the ‘pos’ that are greater than the element at
// ‘pos’. 
// Example : array : 7, 5 , 2 , 4, 7, 3
// pos : 3
// output: left < array[pos] = 1, right > array[pos] = 1


#include <iostream>
using namespace std;

// Pair class 
class Pair{
public:
    int first;
    int second;
};

// function to count the number of elements less than and greater than the given position
Pair countLessAndGreater(int arr[],  int size,  int pos){

    int less = 0;
    int greater = 0;

    // do some work in the left part of position
    int i = pos;
    while(i >= 0){
        if(arr[i] < arr[pos]){
            less++;
        }
        i--;
    }

    // do some work in the right part of position
    int j = pos;
    while(j < size){
        if(arr[j] > arr[pos]){
            greater++;
        }
        j++;
    }

    return {less, greater};
}



// Driver Code ////////////////////////////////////////////////////////////////////////
int main()
{
    cout << "Enter size of array...\n";
    int size;   cin >> size;

    int *arr = new int[size];

    // Take n integers from the user
    for(int i = 0;  i < size;  i++){
        cin >> arr[i];
    }

    cout << "Enter position...\n";
    int pos;  cin >> pos;
    Pair p = countLessAndGreater(arr, size, pos);

    cout << "Numbers less than the number that is at position " << pos << " : " << p.first << endl;
    cout << "Numbers greater than the number that is at position " << pos << " : " << p.second << endl;

    // delete memory
    delete [] arr;

    return 0;
}