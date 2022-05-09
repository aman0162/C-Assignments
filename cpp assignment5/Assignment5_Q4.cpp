#include<bits/stdc++.h>
using namespace std ;

#define MAX 10
class Matrix{
	int row ;
	int column ;
	int arr[MAX][MAX];
	
	public :
		Matrix(){
			row = 0 ;
			column = 0 ;
		}
		Matrix(int r , int c , int *Arr){
			
			row = r;
			column = c ;
			for(int i = 0 ; i < row ; i++){
				
				for(int j = 0 ; j < column ; j++){
					 
					 if(i == 0){
					 	arr[i][j] = Arr[j];
					 }
					 else{
					 	arr[i][j] = 0 ;
					 }
				}
				
			}
			
		}
		
		void show(){
			
			cout << "Matrix Contains : " << endl ;
			for(int i = 0 ; i < row ; i++){
				for(int j = 0 ; j < column ; j++){
					cout << arr[i][j] << " ";
				}
				cout << endl ;
			}
		}
};
class Vector {
		int len ;
		int arr[MAX];

	public :

		Vector() {
			len = 0 ;
		}
		void setLength(int a) {
			len = a ;
		}
		int getLength() {
			return len;
		}
		operator float(){
			cout << "Magniture is : " ;
			float mag = 0 ;
			for(int i = 0 ; i < len ; i++){
				mag = mag + (1.0 * (arr[i]*arr[i]));
			}
			return sqrt(mag);
		}
		void inputArray() {
			cout << "Please enter array size : "  ;
			cin >> len ;
			cout << "Please enter array elements " << endl ;
			for(int i = 0 ; i < len ; i++) {
				cin >> arr[i];
			}
		}
		
		operator Matrix(){
		
			return Matrix(len , len , arr);
		}


};

int main() {
	int choice ;
	int temp ;
	Vector A , B  ;
	Matrix mat ;

	while(1) {
		cout << "Menu " << endl ;
		cout << "1 : Calculate Magniture " << endl;
		cout << "2 : Convert Vector to Matrix  " << endl;
		cout << "3 : Exit " << endl << endl ;
		cout << "Please enter choice " << endl ;

		cin >> choice ;

		switch(choice) {
			case 1 :
				A.inputArray();
				cout << (float)A << endl ;
				break;
			case 2 :
				B.inputArray();
				mat = B ;
				
				mat.show();
				break;
			case 3 :
				exit(0);
			default :
				cout << "Please enter a valid choice ";
		}
	}
}