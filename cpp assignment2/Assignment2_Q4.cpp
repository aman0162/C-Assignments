#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
float plusoverloaded(float a,float b)
{
	return (a+b);
}
string plusoverloaded(string a,string b)
{
	return (a+b);
}
void plusoverloaded(int a[],int n,int val)
{
	cout<<"********* After addition in all elements of arr1 ******* \n";
	for(int i=0;i<n;i++)
	{
		a[i]=a[i]+val;
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	
	
}
void plusoverloaded(int a[],int n,int b[],int m)
{
cout<<"\n enter elements in merged  array \n";
	int i;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	for(int i=0;i<m;i++)
	{
		int flag=0;
		for(int k=0;k<n;k++)
		{
			if(a[k]==b[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		cout<<b[i]<<" ";
	}
}
int main()
{
	//1>if two floats are passed, then addition operation to be performed on inputs
	float f1,f2;
	cout<<"\n enter two floating point no : ";
	cin>>f1>>f2;
	cout<<plusoverloaded(f1,f2)<<endl;


	//2> if two strings are passed, then concatenation of two strings is performed.
	string s1,s2;
	cout<<"\n enter two string s1 and s2 : \n";
	getline(cin>>ws,s1);
	getline(cin>>ws,s2);
	cout<<plusoverloaded(s1,s2)<<endl;
	
	//3> if an integer array, its size and an integer is passed then the given integer is
	//added to all the elements of the array.
	int x,n;
	cout<<"\n enter size of arr : ";
	cin>>n;
	int arr[n];
	cout<<"\n enter elements in arr \n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\n enter an element to be added in all elements of arr "<<endl;
	cin>>x;
	plusoverloaded(arr,n,x);
	
	
	// 4> If two integer arrays are passed, the both the arrays are merged by eliminating
	//duplicate entries
	int n1,n2;
	cout<<"\n size of arr1 : ";
	cin>>n1;
	cout<<"\n size of arr2 : ";
	cin>>n2;
	int arr1[n1],arr2[n2];
	cout<<"\n enter elements in first array \n";
	for(int i=0;i<n1;i++)
	{
		cin>>arr1[i];
	}
	cout<<"\n enter elements in second array \n";
	for(int i=0;i<n2;i++)
	{
		cin>>arr2[i];
	}
	plusoverloaded(arr1,n1,arr2,n2);
	return 0;
}
