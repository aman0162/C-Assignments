#include<bits/stdc++.h>
using namespace std;
string substring(string str,int b,int e)
{
	string substr="";
	if(str.length()==0)
	throw("Empty String does not have substring ");
	if(str.length()-1<b || str.length()-1<e)
	throw("String Index Out of Bound ");
	else
	{
		
		for(int i=b;i<=e;i++)
		{
			substr+=str[i];
		}
	
	}
	return substr;
}
int main()
{
	string str;
	cout<<"\n Enter a string ";
	getline(cin>>ws,str);
	try
	{
		int b,e;
		cout<<"\n Enter start and end pos of substring \n";
		cin>>b>>e;
		cout<<"\n The substring is "<<substring(str,b,e)<<endl;
	}
	catch(const char* strException)
	{
		cerr<<"Error: "<<strException<<endl;
	}
	
}
