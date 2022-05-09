#include<bits/stdc++.h>
using namespace std;
struct KYC
{
	private:
	string name,dob,address;
	long long pan,aadhar;
	double income,saving,tax;
	public:
		void input_data()
		{
			cout<<"************INPUT KYC DETAILS ***************";
			cout<<"\n enter your name : ";
			getline(cin>>ws,name);
			cout<<"\n enter your date of birth dd/mm/yy : ";
			cin>>dob;
			cout<<"\n enter your pan card number : ";
			cin>>pan;
			cout<<"\n enter your aadhar card number : ";
			cin>>aadhar;
			cout<<"\n enter your address : ";
			getline(cin>>ws,address);
			cout<<"\n enter your Annual Income : ";
			cin>>income;
			cout<<"\n enter your saving under tax scheme upto max 1.5 lakhs : ";
			cin>>saving;
		}
		void output_data()
		{
			cout<<"*********** YOUR KYC DETAILS ARE *************";
			cout<<"\n your name : "<<name;
			cout<<"\n your date of birth dd/mm/yy : "<<dob;
			cout<<"\n your pan card number : "<<pan;
			cout<<"\n your aadhar card number : "<<aadhar;
			cout<<"\n your address : "<<address;
			cout<<"\n your Annual Income : "<<income;
			cout<<"\n your saving under tax scheme : "<<saving;
			cout<<"\n your tax on income-saving : "<<tax;
		}
		void computeIncomeTax()
		{
			if(income<500000)
			{
				tax=0;
			}
			else if(income>=500000 && income<1000000)
			{
				tax=(income-saving)/10;
			}
			else if(income>=1000000)
			{
				tax=(income-saving)/5;
			}
		}
};
int main()
{
	struct KYC s[7];
	for(int i=0;i<7;i++)
	{
		s[i].input_data();
		s[i].computeIncomeTax();
	}
	system("CLS");
	for(int i=0;i<7;i++)
	{
		
		s[i].output_data();
	}
	return 0;
}
