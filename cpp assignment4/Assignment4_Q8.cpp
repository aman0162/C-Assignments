


#include<bits/stdc++.h>
#include<cmath>
using namespace std;

double beta(double,double);

double beta(double x,double y){

    double ans;
    ans = float(tgamma(x)*tgamma(y))/tgamma(x+y);
    return ans;
}

// Driver Code
int main(){
    float num;

    cout<<"Gamma :: Enter a number :: ";
    cin>>num;

    cout<<"Gamma of "<<num<<" is "<<tgamma(num);


    int num1,num2;
    cout<<"\n\nBeta :: Enter first number :: ";
    cin>>num1;

    cout<<"Beta :: Enter seconf number :: ";
    cin>>num2;

    cout<<"\nBeta of "<<num1<<" and "<<num2<<" is "<< beta(num1,num2);

    return 0;
}