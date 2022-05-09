 #include<bits/stdc++.h>
using namespace std;
class VegCuisine
{
    protected:
    string name;
    float cost;
    public:
    VegCuisine()
    {
        cout<<"\n Enter name in VegCuisine : ";
        getline(cin>>ws,name);
        cout<<"\n Enter cost of VegCuisine : ";
        cin>>cost;
        cout<<"\n Constructor of VegCuisine is created \n";
    }
    ~VegCuisine()
    {
        cout<<"\n Destructor of VegCuisine is invoked \n";
    }
    void printdata()
    {
        cout<<"\n Name in VegCuisine : "<<name;
        cout<<"\n Cost of VegCuisine : "<<cost;
    }
};
class NonVegCuisine
{
    protected:
    string name;
    float cost;
    public:
    NonVegCuisine()
    {
        cout<<"\n Enter name in NonVegCuisine : ";
        getline(cin>>ws,name);
        cout<<"\n Enter cost of NonVegCuisine : ";
        cin>>cost;
        cout<<"\n Constructor of NonVegCuisine is created \n";
    }
    ~NonVegCuisine()
    {
        cout<<"\n Destructor of NonVegCuisine is invoked \n";
    }
    void printdata()
    {
        cout<<"\n Name in NonVegCuisine : "<<name;
        cout<<"\n Cost of NonVegCuisine : "<<cost;
    }
};
class  ComboCuisine: public VegCuisine,public NonVegCuisine
{
    public:
    ComboCuisine()
    {
        cout<<"\n Constructor of ComboCuisine is created \n";
    }
    ~ComboCuisine()
    {
         cout<<"\n Destructor of ComboCuisine is invoked \n";
    }
    void printdata()
    {
       VegCuisine::printdata();
       NonVegCuisine::printdata();
    }
};
int main()
{
 VegCuisine *ptr=NULL;
 ComboCuisine c1;
 ptr=&c1;
 ptr->printdata();
 NonVegCuisine *ptr2=NULL;
 ptr2=&c1;
 ptr2->printdata();
}