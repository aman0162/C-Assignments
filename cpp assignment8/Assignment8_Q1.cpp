#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b;
	cout<<"\n Enter two nos ";
	cin>>a>>b;
	try
	{
		if(b==0)
		{
			throw(1);
		}
		if(b<0)
		throw(2);
		if(b>INT_MAX)
		throw(3);
		cout<<a<<"/"<<b<<"="<<a/b;
	}
	catch(int a)
	{
		if(a==1)
		cout<<"\n There is an exception divide by zero\n";
		if(a==2)
		cout<<"\n There is an exception divide by negative numbers \n";
		if(a==3)
		cout<<"\n There is an exception divide by very long number \n";
	}
	return 0;
}
