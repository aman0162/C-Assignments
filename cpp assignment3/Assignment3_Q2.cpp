#include<bits/stdc++.h>
using namespace std;
class Fraction
{
	int num;
	int denom;
	public:
		Fraction() //it is a default constructor
		{
			num=0;
			denom=1;
		}
		Fraction(int a,int b) // a parametrized constructor
		{
			num=a;
			denom=b;
		}
		~Fraction() //destructor
		{
			cout<<"\n object is destroyed for class Fraction \n";
		}
	
		void setFraction(int a,int b) //to input data
		{
			num=a;
			denom=b;
		}
		void getFraction() //to display data
		{
			cout<<num<<"/"<<denom<<endl;
		}
		void addFraction(Fraction obj1,Fraction obj2) //adding fraction
		{

			num=(obj1.num*obj2.denom+obj2.num*obj1.denom);
			denom=(obj1.denom*obj2.denom);
		}
		void reduceFraction() //reduced form of fraction
		{
			cout<<num/__gcd(num,denom)<<"/"<<denom/__gcd(num,denom)<<endl;
		}
		void divFraction(Fraction obj1,Fraction obj2) //dividing two factors 
		{
			num=obj1.num*obj2.denom;
			denom=obj1.denom*obj2.num;
		}
};
int main()
{
	Fraction o1,o2,o3; //object creation
	int a,b;
	cout<<"\n enter fraction (a/b) of obj1 "<<endl;
	cin>>a>>b;
	o1.setFraction(a,b); //input data in object 1
	cout<<"\n enter fraction (a/b) of obj2 "<<endl;
	cin>>a>>b;
	o2.setFraction(a,b);//input data in object 2
	cout<<"\n Fraction of obj1 ";
	o1.getFraction();
	cout<<"\n Fraction of obj2 ";
	o2.getFraction();
	o3.addFraction(o1,o2);//addition
	cout<<"\n sum of fraction is ";
	o3.getFraction();
	cout<<"\n Fraction in obj3 is ";
	o3.getFraction();
	cout<<"\n reduce form of obj3 is ";
	o3.reduceFraction(); //reduced form 
	o3.divFraction(o1,o2);//division
	cout<<"\n division of fraction is ";
	o3.getFraction();
	cout<<"\n Fraction in obj3 is ";
	o3.getFraction();
	cout<<"\n reduce form of obj3 is ";
	o3.reduceFraction();
	return 0;
}
