#include<bits/stdc++.h>
using namespace std;
class Time
{
	int hour;
	int minute;
	int sec;
	public:
		Time() //default constructor
		{
			hour=0;
			minute=0;
			sec=0;
		}
		Time(int h,int m,int s) //parametrized constructor
		{
			hour=h;
			minute=m;
			sec=s;
		}
		~Time() //destructor
		{
			cout<<"\n object is destroyed for class Time \n";
		}
	
		void setTime(int h,int m,int s) //to input data
		{
			hour=h;
			minute=m;
			sec=s;
		}
		void getTime() //to display data
		{
			cout<<hour<<"::"<<minute<<"::"<<sec<<endl;
		}
		void calcTimeDifference(Time a,Time b) //calculating difference between two time 
		{
			
				if(a.sec<b.sec)
				{
					a.sec+=60;
					a.minute-=1;
				}
				if(a.minute<b.minute)
				{
					a.minute+=60;
					a.hour-=1;
				}
				cout<<abs(a.hour-b.hour)<<" :: "<<a.minute-b.minute<<" :: "<<a.sec-b.sec<<endl;
		}
		void resetTime() //resetting time
		{
			hour=0;
			minute=0;
			sec=0;
		}
	};
	int main()
	{
		Time t1,t2,t3; // three objects are created
		int h,m,s;
		// taking input
		cout<<"\n enter time1 h::m::s ";
		cin>>h>>m>>s;
		t1.setTime(h,m,s);
			cout<<"\n enter time2 h::m::s ";
		cin>>h>>m>>s;
		t2.setTime(h,m,s);
		cout<<"\n time 1 is ";
		t1.getTime();
		cout<<"\n time 2 is ";
		t2.getTime();
		cout<<"\n time difference is ";
		t3.calcTimeDifference(t1,t2);
		cout<<"\n now time 1 is ";
		t1.resetTime();
		t1.getTime();
		return 0;
	}
