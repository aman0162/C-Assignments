#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
template<class T>
void print(T *arr,int n){
        cout<<"\n\t  Elements are \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"    ";
    }
    cout<<"\n \n";
    	getch();
    }

class Complex1{
    int real;
    int img;
    public:
    Complex1()
    {
        real=0;
        img=0;
    }
   
    friend ostream& operator<<(ostream &out,const Complex1 &c);
    friend istream& operator>>(istream &in,Complex1 &c);
};
ostream &operator<<(ostream &out,const Complex1 &c)
{
	cout<<"\n";
    out<<c.real<<"+"<<c.img<<"i"<<endl;
    return out;
}
istream &operator>>(istream &in,Complex1 &c)
{
cout<<"\n Enter real part ";
in>>c.real;
cout<<"\n Enter imaginary part ";
in>>c.img;
return in;
}
int main()
{
    int ch,size;
	
	while(true){
	//system("cls");
		cout << "\n \t Menu" << endl;
		cout << "Press 1 : Integer Array " << endl;
		cout << "Press 2 : Double Array " << endl ;
		cout << "Press 3 : String Array " << endl ;
		cout << "Press 4 : Complex Array " << endl ;
		cout << "Press 5 : Exit" << endl;
		cout << "Please enter your choice " ;
		cin >> ch;
		switch(ch){
			case 1 :
				{
				cout << "Please enter size of Integer Array : ";
				cin >> size ;
				int iarr[size];
				cout <<"Please enter Integer elements of Array : ";
				for(int i = 0 ; i < size ; i++){
					cin >> iarr[i];
				}
				print(iarr, size);
				break;
				}
				
			case 2 :
			{			
				cout << "Please enter size of Double Array : ";
				cin >> size ;
				double darr[size];
				cout <<"Please enter double elements of array : ";
				for(int i = 0 ; i < size ; i++){
					cin >> darr[i];
				}
				print(darr,size);
				break;
			}
				
			case 3 :
				{
				
				cout << "Please enter size of String Array : ";
				cin >> size ;
				string sarr[size];
				cout <<"Please enter string elements of array : ";
				for(int i = 0 ; i < size ; i++){
					getline(cin >>ws, sarr[i]);
				}
				print(sarr,size);
				break;
			}
			
			case 4 :
				{
				
				cout << "Please enter size of array : ";
				cin >> size ;
				Complex1 carr[size];
				cout <<"Please enter Complex elements of array : ";
				for(int i = 0 ; i < size ; i++){
					cin >> carr[i];
				}
				print(carr,size);
				break;
			}
			case 5 :
				exit(0);
			default : 
			cout << "Please enter a valid choice " << endl ;
		}
		
	}
    return 0;
}
