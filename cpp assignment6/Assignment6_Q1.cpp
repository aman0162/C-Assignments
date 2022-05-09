#include<bits/stdc++.h>
using namespace std;
class point
{
    float xco,yco;
    public:
    point(float x,float y)
    {
        xco=x;
        yco=y;
       cout<<"\n Constructor of Point class is called \n";
    }
    ~point()
    {
cout<<"\n Destructor of Point class is called \n";

    }
    void print()
    {
        cout<<"[ xco , yco ]= "<<"[ "<<xco<<" , "<<yco<<"]"<<endl;
    }
};


class ellipse:public point
{
	protected:
    float a_axis,b_axis;
    public:
    ellipse(float x,float y,float a,float b):point(x,y)
    {
a_axis=a;
b_axis=b;
        cout<<"\n Constructor of Ellipse class is called \n";
    }
    ~ellipse()
    {
cout<<"\n Destructor of Ellipse class is called \n";
    }
    void print()
    {
cout<<"[ a_axis , b_axis ]= "<<"[ "<<a_axis<<" , "<<b_axis<<"]";
    }
    float area()
    {
        cout<<"\n Area of ellipse is "<<(22/7)*a_axis*b_axis<<endl;
    }
    float get()
    {
        return a_axis*b_axis;
    }
};
class ellipsoid : public ellipse
{
protected:
    float c_axis;
    public:
    ellipsoid(float xco,float yco,float a,float b,float c):ellipse(xco,yco,a,b)
    {
        c_axis=c;
        cout<<"\n Constructor of Ellipsoid is called \n";

    }
    ~ellipsoid()
    {

cout<<"\n Destructor of Ellipsoid class is called \n";
    }
    void print()
    {
cout<<"[ c_axis ]= "<<"[ "<<c_axis<<"]"<<endl;
    }
    float volume()
    {
cout<<"\n Volume of ellipsoid is "<<(22/7)*(4/3)*a_axis*b_axis*c_axis<<endl;
    }
};
int main()
{
    ellipsoid e(10.0,20.0,15,25,35);
    e.area();
    e.volume();
    e.point::print();
     e.ellipse::print();
      e.ellipsoid::print();
}