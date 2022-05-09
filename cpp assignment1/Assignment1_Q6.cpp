#include<bits/stdc++.h>
using namespace std;
void pos(int arr[],int n)
{
	int position,lct=0,rct=0;
	cout<<"\n enter postion in zero based indexing : ";
	cin>>position;
	for(int i=0;i<position;i++)
	{
		if(arr[i]<arr[position])
		{
			lct++;
		}
	}
	for(int i=position+1;i<n;i++)
	{
		if(arr[i]>arr[position])
		{
			rct++;
		}
	}
	cout<<"left elements which are smaller "<<lct<<"\n"<<"right elements which are greater "<<rct;
}
int main()
{
	int n;
	cout<<"\n enter no of elements : ";
	cin>>n;
	int *arr=new int[n];
	cout<<"\n enter elements in array : ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	pos(arr,n);
	return 0;
}
