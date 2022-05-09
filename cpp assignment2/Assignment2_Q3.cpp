#include <bits/stdc++.h>
using namespace std;
float R = 8.3145;       //ideal gas constant in J/(K*mol)
float g = 9.8; // acceleration of gravity
inline void GasLaw(double Volume,double Temperature,double n)
{
   
    double Pressure=(n*R*Temperature)/Volume;
    cout<<"Pressure will be: "<<Pressure<<endl;
}
inline void BuoyantForce(float Vol, float Roh)
{
    float F = Vol*Roh*g;
    cout<<"Buoyant Force will be: "<<F<<" N."<<endl;
}
inline void Displacement(float u, float a, float t)
{
    float S;
    S = (u*t)+(a*t*t)/2;
    cout<<"Displacment will be: "<<S<<" m."<<endl;
}
inline void xor1(int a, int b)
{
    cout << a << " XOR " << b << " is = " <<(a^b);
}
int main()
{
	cout<<"*************Ideal Gas law.*****************\n";
    double V,T,n;
    cout<<"Enter the volume(in m^3): ";
    cin>>V;    
    cout<<"Enter the Temperature(in K): ";
    cin>>T;   
    cout<<"Enter the moles of gas: ";
    cin>>n;    
    GasLaw(V,T,n);  
    
    
    
   	cout<<"*************Buoyant Force .*****************\n";
    float Vol,Roh;
    cout<<"Enter the volume(in m^3): ";
    cin>>Vol;  
    cout<<"Enter the fluid density(in kg/m^3): ";
    cin>>Roh;  
    BuoyantForce(Vol, Roh); 
    
    
    
    cout << "***************Final displacement************\n";
    float u,t,a;
    cout<<"Enter the initial point(in m/s): ";
    cin>>u;     
    cout<<"Enter the time taken(in s): ";
    cin>>t;  
    cout<<"Enter the acceleration(in m/s^2): ";
    cin>>a; 
    Displacement(u, a, t); 


	cout << "*************** XOR ************\n";
    int x,y;
    cout << "Enter two numbers: ";
    cin >>x>>y;
    xor1(x,y);
    return 0;
}
