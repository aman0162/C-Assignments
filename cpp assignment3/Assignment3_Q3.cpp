#include<bits/stdc++.h>
using namespace std;
class Point2D
{
	int xco;
	int yco;
	public:
		Point2D()//default constructors
		{
			xco=0;
			yco=0;
		}
		Point2D(int a,int b) //parametrized constructor
		{
			xco=a;
			yco=b;
		}
		~Point2D()//destructor
		{
			cout<<"\n object is destroyed for class Point2D \n";
		}
	
		void setPoint(int a,int b)//to input data
		{
			xco=a;
			yco=b;
		}
		void getPoint() //to display data
		{
			cout<<"("<<xco<<","<<yco<<")"<<endl;
		}
		bool insideCircle(int r,Point2D cen) //whether a point is inside a circle or not
		{
			if(r>=(sqrt(pow(cen.yco-yco,2)+pow(cen.xco-xco,2))))
			return 1;
			return 0;
		}
		bool checkCollinear(Point2D a,Point2D b) //three points are collinear or not
		{
			if(!(xco*(a.yco-b.yco)-yco*(a.xco-b.xco)+(a.xco*b.yco-b.xco*a.yco)))
			{
				return 1;
			}
			else
			return 0;
		}
	};
	int main()
	{
		Point2D o1,o2,o3; //three objects are created
		int a,b,r;
	cout<<"\n enter point (a,b) of obj1 "<<endl;
	cin>>a>>b;
	//taking three points 
		o1.setPoint(a,b);
		cout<<"\n enter point (a,b) of obj2 "<<endl;
	cin>>a>>b;
		o2.setPoint(a,b);
	cout<<"\n enter point (a,b) of obj3 "<<endl;
	cin>>a>>b;
		o3.setPoint(a,b);	
		cout<<"\n points in obj1 : ";
		o1.getPoint();
			cout<<"\n points in obj2 : ";
		o2.getPoint();
			cout<<"\n points in obj3 : ";
		o3.getPoint();
		cout<<"\n enter radius of circle ";
		cin>>r;
		if(o1.insideCircle(r,o2))
		cout<<"\n yes point is inside "<<endl;
		else
		cout<<"\n no points is not inside "<<endl;
		if(o3.checkCollinear(o1,o2))
		{
			cout<<"\n points are collinear "<<endl;
			
		}
		else
		cout<<"\n points are not collinear "<<endl;
		return 0;
	}
		
