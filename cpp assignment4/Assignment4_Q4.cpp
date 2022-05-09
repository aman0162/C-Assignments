


// Question 4 /////////////////////////////////////////////////
// Complete
#include<iostream>
using namespace std;
int countDuplicates(int *arr , int &n){ 				// Call By Reference
	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++) {
			if(arr[i] > arr[j]) {
				swap(arr[i], arr[j]); 			// Sort The Array
			}
		}
	}
	int ans = 0;
	int i = 1;
	int previous = arr[0];
	while(i < n) {
		if(arr[i] == previous) { 			// Count No of Duplicate Elements
			ans++;
			while(arr[i] == previous) {
				previous = arr[i];
				i++;
			}
		}
		else {
			previous = arr[i];
			i++;
		}
	}
	return ans;
}
int main() {
	int n;
	cout << "Enter the size of the array : "; 		// Take Size Of Array
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cout << "Enter The Element Array[" << i << "] : "; 		// Take Elements Of Array
		cin >> arr[i];
	}
	int ans = countDuplicates(arr, n);
	cout << "Number Of Duplicate Elements : " << ans << '\n'; 		// Print Output
	return 0;
}
