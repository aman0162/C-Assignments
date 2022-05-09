#define _STDCPP_WANT_MATH_SPEC_FUNCS_ 1
#include <bits/stdc++.h>
using namespace std;
//psi function definition
void psi_fun()
{
    double x;
    cout << "Enter the value of x :";
    cin >> x;
    double result = 0, xx, xx2, xx4;
    assert(x > 0);
    for (; x < 7; ++x)
    result -= 1 / x;
    x -= 1.0 / 2.0;
    xx = 1.0 / x;
    xx2 = xx * xx;
    xx4 = xx2 * xx2;
    result += log(x) + (1. / 24.) * xx2 - (7.0 / 960.0) * xx4 + (31.0 / 8064.0) * xx4 * xx2 - (127.0 / 30720.0) * xx4 * xx4;
    cout << "psi(x) : " << result << "\n";
}
//beta function definition
double beta(double x,double y){
    double ans;

    ans=float(tgamma(x)*tgamma(y))/tgamma(x+y);

    return ans;
}
int main()
{
    double x,y;
    //infinite loop
    while(1)
    {
        cout <<"**MENU**"<<endl;
        cout <<"1.Press 1 to find Gamma."<<endl;
        cout <<"2.Press 2 to find Beta."<<endl;
        cout <<"3.Press 3 to find Psi."<<endl;
        cout <<"4.Press 4 for exit."<<endl;
        cout <<"-----------------------"<<endl;
        int choice;
        cout << "Enter your choice: " ;
        cin >> choice;

        switch(choice)
        {
        case 1:
            cout<<"Enter the value of x : ";
            cin>>x;
            //gamma() 
            cout<<"Gamma(x) : "<<tgamma(x)<<endl;
            break;
        case 2:
            cout<<"Enter the value of x : ";
            cin>>x;
            cout<<"Enter the value of y : ";
            cin>>y;
            //beta() 
            cout<<"Beta(x,y) : " << beta(x,y) << endl;
            break;
        case 3:
        	//psi()
            psi_fun();
            break;
        case 4:
            cout<<"Exiting program..!";
            exit(0);
        default:
            cout<<"Invalid choice..!"<<endl;
        }
    }
    return 0;
}
