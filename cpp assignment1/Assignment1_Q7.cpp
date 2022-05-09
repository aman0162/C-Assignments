 #include<bits/stdc++.h>
 using namespace std;
 int sodrecursive(int no)
 {
 	if(no/10==0)
 	{
 		return no;
	 }
	 return no%10+sodrecursive(no/10);
 }
 int sod(int no)
 {
 	int sum=0;
 	while(no>0)
 	{
 		sum=sum+no%10;
 		no/=10;
	}
	return sum;
 }
 int main()
 {
 	int no;
 	cout<<"\n enter a no : ";
 	cin>>no;
 	cout<<"sum of digit by recursion "<<sodrecursive(no)<<"\n";
 	cout<<"sum of digit with recursion "<<sod(no)<<"\n";
 	return 0;
 }
