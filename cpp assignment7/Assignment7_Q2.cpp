 #include<bits/stdc++.h>
using namespace std;
class familyMember
{
string name,familyname,origin;
public:
familyMember()
{
    cout<<"\n Enter Data in FamilyMember class \n";
    cout<<"\n Enter Name : ";
    getline(cin>>ws,name);
    cout<<"\n Enter familyname : ";
    getline(cin>>ws,familyname);
    cout<<"\n Enter origin : ";
    getline(cin>>ws,origin);
}
~familyMember()
{
    cout<<"\n Destructor of Family Member class is called\n";
}
virtual void about()
{
    cout<<"\n This is about function of FamilyMember class \n";
}
};
class Citizen
{

    string name,familyname,origin;
public:
    Citizen()
    {
        cout<<"\n Enter Data in Citizen class \n";
    cout<<"\n Enter Name : ";
    getline(cin>>ws,name);
    cout<<"\n Enter familyname : ";
    getline(cin>>ws,familyname);
    cout<<"\n Enter origin : ";
    getline(cin>>ws,origin);

    }
    ~Citizen()
    {
        cout<<"\n Destructor of Citizen class is called\n";

    }
    virtual void about()
    {
        cout<<"\n This is about function of Citizen class \n";

    }
};
class Employee:public familyMember,public Citizen
{
    string name;
public:
    Employee()
    {
        cout<<"\n Enter Data in Employee class \n";
    cout<<"\n Enter Name : ";
    getline(cin>>ws,name);

    }
    ~Employee()
    {
         cout<<"\n Destructor of Employee class is called\n";

    }
    void about()
    {
         cout<<"\n This is about function of Employee class.\n This class inherits the properties of familyMember and Citizen \n";
    }

};
int main()
{
    familyMember *ptr=NULL;
    familyMember o1;
    ptr=&o1;
    ptr->about();
    Employee e;
    ptr=&e;
    ptr->about();
    return 0;
}
