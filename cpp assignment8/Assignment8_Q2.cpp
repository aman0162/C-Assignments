#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,pos;
	cout<<"\n Enter size of Array ";
	cin>>n;
	int arr[n];
	cout<<"\n Enter elements in array \n";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"\n Enter pos to access element ";
	cin>>pos;
	try{
		if(pos<0 || pos>n-1)
		throw(1);
		cout<<"arr[pos]="<<arr[pos]<<endl;
	}
	catch(int)
	{
		cout<<"\n There is an Array Index Out of Bound Exception \n";
	}
}
