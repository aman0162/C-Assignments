#include<bits/stdc++.h>
using namespace std;
void print(int n=5,int d=1)
{
	int ct=1; //starting counter
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j<=i)
			{
				if(ct>9)// if counter is greater than 9 then restart counting from 1
				{
					ct=1;
				}
				cout<<ct<<" ";
				ct+=d;
			}
		}
		cout<<"\n";
	}
}
int main()
{
	int n,d;
	cout<<"\n enter no of line : ";
	cin>>n; //input no of rows
	cout<<"\n enter difference : ";
	cin>>d; // input difference to increment counter elements 
	cout<<"\n\n ********** your pattern ********** \n\n";
	print(n,d);    // let n=6,d=2
	cout<<"\n ********** default pattern ********** \n";
	print(); // here n=5,d=1
	return 0;
}
