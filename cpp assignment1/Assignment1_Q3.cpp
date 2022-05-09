#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n1,n2,m1,m2;
	cout<<"\n enter the no of rows of matrix 1st : ";
	cout<<"\n enter the no of column of matrix 1st : ";
	cout<<"\n enter the no of rows of matrix 2nd : ";
	cout<<"\n enter the no of column of matrix 2nd : ";
	int *matrix1=new int[n1*m1];
	int *matrix2=new int[n2*m2];
	int *matrix3=new int[n1*m2];
	for(int i=0;i<n1*m1;i++)
	{
			cin>>matrix1[i];
	}
		for(int i=0;i<n2*m2;i++)
	{
			cin>>matrix2[i];
	}
	if(m1==n2)
	{
		for(int i=0;i<n1;i++)
		{
			for(int j=0;j<m2;j++)
			{
				matrix3[i][j]=0;
				for(int k=0;k<m2;k++)
				{
					matrix3[i][j]+=matrix1[i][k]*matrix2[k][j];
				}
			}
		}
		for(int i=0;i<n1;i++)
		{
			for(int j=0;j<m2;j++)
			{
			cout<<matrix3[i][j]<<"  ";
		}
		cout<<"\n";
		}
	}
	return 0;
}
