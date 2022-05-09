#include<bits/stdc++.h>
using namespace std;
class Number
{
	int num;
	public:
	Number() //default constructor
	{
		num=0;
	}
	Number(int n) //parametrized constructor
	{
		num=n;
	}
	~Number()//destructor
	{
		cout<<"object destroyed for class Number"<<endl;
	}
	void setNumber() //to input data
	{
		cout<<"\n enter a number : ";
		cin>>num;
	}
	void getNumber() //to display data
	{
		cout<<"number is "<<num<<endl;
	}
	void changeNumber() //change data
{
	cout<<"\n enter a number to change : ";
		cin>>num;
}
bool isArmstrong() // to check armstrong number
{
	int n=num;
	int sum=0;
	while(n>0)
	{
		sum=sum+pow(n%10,3);
		n/=10;
	}
	if(sum==num)
	{
		cout<<num<<" is an armstrong number \n";
	}
	else
	cout<<num<<" is not an armstrong number \n";
}
bool isPrime() // to check prime number
{
	if(num<=1)
	{
		return 0;
	}
	for(int i=2;i<=num/2;i++)
	{
		if(num%i==0)
		return 0;
	}
	return 1;
}
int nextCoprime() //next coprime
{
	for(int i=num+1;;i++)
	{
		if(__gcd(num,i)==1)
		{
			cout<<"\n coprime of num"<<num<<" is "<<i<<" \n";
			break;
		}
	}
}
int reverse() //reverse a number
{
	int rev=0;
	int n=num;
	while(n>0)
	{
		rev=rev*10+n%10;
		n/=10;	
	}
	cout<<"\n reverse of num is "<<rev<<endl;
}
};
int main()
{
	Number n1,n2(19); //two objects are created
	cout<<"\n enter value in num of object 1 : ";
	n1.setNumber(); //take input 
	cout<<"\n enter value in num of object 2 : ";
	n2.changeNumber(); 
	cout<<"\n num in object 1 is "<<endl;
	n1.getNumber();
	cout<<"\n num in object 2 is "<<endl;
	n2.getNumber();
	n1.isArmstrong();
	n2.isArmstrong();
	if(n1.isPrime())
	cout<<"num of object 1 is prime \n";
	else
	cout<<"\n num of object 1 is not a prime \n";
	if(n2.isPrime())
	cout<<"\n num of object 2 is prime \n";
	else
	cout<<"\n num of object 2 is not prime \n";
	n1.nextCoprime();
	n2.nextCoprime();
	n1.reverse();
	n2.reverse();
	return 0;
}
