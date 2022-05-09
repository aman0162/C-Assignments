#include<bits/stdc++.h>
using namespace std;
struct product
{
	private:
		int product_id;
		string product_name,rating;
		float disc_per,CGST=18,SGST=18;
		double mark_price,selling_price;
		
	public:
		void input_detail()
		{
			cout<<"\n enter product id : ";
			cin>>product_id;
			cout<<"\n enter product name : ";
			getline(cin>>ws,product_name);
			cout<<"\n enter discount percentage : ";
			cin>>disc_per;
			cout<<"\n enter product lebel price : ";
			cin>>mark_price;
			cout<<"\n user rating the product : ";
			getline(cin>>ws,rating);
		}
		void output_detail()
		{
			cout<<"\n ************ PRODUCT DETAILS ARE ***************";
			cout<<"\n product id : "<<product_id;
			cout<<"\n product name : "<<product_name;
			cout<<"\n rating : "<<rating;
			cout<<"\n product mark price : "<<mark_price;
			cout<<"\n discount percentage : "<<disc_per;
			cout<<"\n selling price : "<<selling_price;
		}
		void computesalesprice()
		{
			selling_price=mark_price-(mark_price*disc_per/100)-(mark_price*CGST/100)-(mark_price*SGST/100);
		}		
};
int main()
{
	struct product p[5];
	for(int i=0;i<5;i++)
	{
		p[i].input_detail();
		p[i].computesalesprice();
	}
	system("CLS");
	for(int i=0;i<5;i++)
	{
		p[i].output_detail();
	}
	return 0;
}
