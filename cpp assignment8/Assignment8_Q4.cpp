#include<bits/stdc++.h>
using namespace std;
#define MAX 10

int untileven(int count =1){
	int a;
	cout << "Please enter an integer : ";
	cin >> a ;
	if(a%2==0){
		return count;
	}
	else{
		try{
			if(count == MAX ){
				throw string("Turns Exceeded");
			}
		}
		catch(string err){
			cout << err;
			exit(0);
		}
		untileven(count+1);
	}
}
int main(){
	//Take numbers as input till even number is encountered , limit the input times to 10
	cout << "Please enter numbers till even is encountered " << endl ;
	cout << "even encountered after " << untileven()-1 <<"input"<<endl ;
}
