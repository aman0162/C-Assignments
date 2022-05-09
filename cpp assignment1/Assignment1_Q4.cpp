#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0;
	cout<<"\n enter size of array ";
	cin>>n;
	int array[n];
	cout<<"\n enter elements in array \n";
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	int temp;
for(int i=0;i<n;i++)
	{		
		for(int j=i+1;j<n;j++)
		{
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
   cout<<"\n sorted array is \n ";
   for(int i=0;i<n;i++)
   {
   	cout<<array[i]<<" ";
   }
	for(int i=0;i<n;i++)
	{
		if(array[i]==array[i+1])
		{
			count++;
			while(array[i]==array[i+1])
			{
				i++;
			}
		}
	}
	cout<<"\n duplicate integers are "<<count;
	return 0;
}
