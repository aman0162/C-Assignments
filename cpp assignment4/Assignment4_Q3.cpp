

// Question 3 ///////////////////////////////////////////////////////
// complete

// #include <iostream>
// using namespace std;

// int main()
// {
//     // Create First Array
//     cout << "Enter the order of matrix for first array...\n";
//     int n, m;   cin >> n >> m;

//     int *arr[n+1];
//     for(int i = 1;  i <= n;  i++){
//         arr[i] = new int[m+1];
//     }

//     // Create Second Array
//     cout << "\nEnter the order of matrix of second array...\n";
//     int n1, m1;   cin >> n1 >> m1;
//     int *secondArr[n1+1];

//     for(int i = 1;  i <= n1;  i++){
//         secondArr[i] = new int[m1+1];
//     }

//     // Take elements in first array ==============================
//     cout << "\nEnter " << n << " * " << m << " elements in matrix...\n";

//     for(int i = 1;  i <= n;  i++){
//         for(int j = 1;  j <= m;  j++){
//             cin >> arr[i][j];
//         }
//     }


//     // Take elements in second array =============================
//     cout << "\nEnter " << n1 << " * " << m1 << " elements in matrix...\n";

//     for(int i = 1;  i <= n1;  i++){
//         for(int j = 1;  j <= m1;  j++){
//             cin >> secondArr[i][j];
//         }
//     }

//     // Display matrix elements
//     // for(int i = 1;  i <= n;  i++){
//     //     for(int j = 1;  j <= m;  j++){
//     //         cout << arr[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }

//     // Corner Case
//     if(m != n1){
//         cout << "Multiplication is not possible...\n";
//         return 0;
//     } 

//     // Create Ans Array
//     int *ansArr[n+1];
//     for(int i = 1;  i <= n;  i++){
//         ansArr[i] = new int[m1+1];
//     }

//     // Multiply two matrices ===============================
//     for(int i = 1;  i <= n;  i++){
//         for(int j = 1;  j <= m1;  j++){

//             ansArr[i][j] = 0;    
//             for(int k = 1;  k <= m1;  k++){    
//                 ansArr[i][j] += arr[i][k] * secondArr[k][j];    
//             } 
//         }
//     } 

//     // Display Ans matrix ============================
//     for(int i = 1;  i <= n;  i++){
//         for(int j = 1;  j <= m;  j++){
//             cout << ansArr[i][j] << " ";
//         }
//         cout << endl;
//     } 

//     // Release the memory
//     for(int i = 1;  i <= m;  i++){
//         delete [] arr[i];
//     }

//     for(int i = 1;  i <= m1;  i++){
//         delete [] secondArr[i];
//     }

//     for(int i = 1;  i <= m1;  i++){
//         delete [] ansArr[i];
//     }

//     return 0;
// }




