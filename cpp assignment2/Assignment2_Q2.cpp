#include<bits/stdc++.h>
using namespace std;
int top=0,avg=0,low=0;// global variable
struct product
{
	private:
	int product_id;
	string rating;
	public:
	void input() // to take product details 
	{
		cout<<"\n enter product id : ";
		cin>>product_id;
		cout<<"\n enter product rating : ";
		cin>>rating;
		// incrementing counter based on following condition
		if(rating.size()>3)
		top++;
		else if(rating.size()==3)
		avg++;
		else if(rating.size()<3)
		low++;
	}
};
//to show the category wise no of products
void calculation()
{
	cout<<"There are/is "<<top<<" product whose rating is 4* or 5* "<<endl;
	cout<<"There are/is "<<avg<<" product whose rating is 3* "<<endl;
	cout<<"There are/is "<<low<<" product whose rating is 1* or 2* "<<endl;
}
int main()
{
	int n;
	cout<<"\n enter no of products : ";
	cin>>n;
	struct product p[n]; // struct of n size 
	for(int i=0;i<n;i++)// assigning input to all product
	{
		p[i].input();
	}
	calculation();
	return 0;
}
