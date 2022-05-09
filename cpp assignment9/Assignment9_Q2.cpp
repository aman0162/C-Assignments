#include<bits/stdc++.h>
using namespace std;
template<class T>
void print(T *arr,int n)
{
	cout<<"\n After Sorting \n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"  ";
	}
}
template<class T>
void insertion_sort(T *arr,int size)
{
	  T temp;
    int j;
    for(int i=1;i<size;i++){
        temp = arr[i];
        for(j = i-1;j>=0&&temp<arr[j];j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
    print(arr,size);
}

class Distance
{
	int feet;
	int inch;
	public:
		Distance()
		{
			feet=0;
			inch=0;
		}
		bool operator<(Distance &d)
		{
			if(feet<d.feet)
			return 1;
			if(feet==d.feet && inch<d.inch)
			{
				return 1;
			}
			else return 0;
		}
		friend ostream& operator<<(ostream &out,Distance &d);
		friend istream& operator>>(istream &in,Distance &d);
};
		istream& operator>>(istream &in,Distance &d)
		{
			cout<<"\n Enter Feet and inch \n";
			in>>d.feet>>d.inch;
			return in;
		}
		ostream& operator<<(ostream &out,Distance &d)
		{
			cout<<d.feet<<"feet "<<d.inch<<"inch"<<endl;
			return out;
		}
int main()
{
	int choice , size;
	
	while(1){
	
		cout << "Menu" << endl;
		cout << "1 : Integer Array " << endl;
		cout << "2 : Double Array " << endl ;
		cout << "3 : Distance Array " << endl ;
		cout << "4 : Exit" << endl;
			cout << "Please enter your choice " ;
		cin >> choice ;
		switch(choice){
			case 1 :
				{
				
				cout << "Please enter size of array : ";
				cin >> size ;
				int narr[size];
				cout <<"Please enter Integer elements of array : ";
				for(int i = 0 ; i < size ; i++){
					cin >> narr[i];
				}
				insertion_sort(narr , size);
			//	print(narr, size);
				
				break;
			}
			case 2 :
			{
			
			
				cout << "Please enter size of array : ";
				cin >> size ;
				double darr[size];
				cout <<"Please enter double elements of array : ";
				for(int i = 0 ; i < size ; i++){
					cin >> darr[i];
				}
				insertion_sort(darr, size);
				//print(darr,size);
			
				break;
			}
			case 3 :
				{
				
				cout << "Please enter size of array : ";
				cin >> size ;
				Distance sarr[size];
				cout <<"Please enter string elements of array : ";
				for(int i = 0 ; i < size ; i++){
					cin >> sarr[i];
				}
				insertion_sort(sarr,size);
				//print(sarr,size);
			
				break;
			}
			case 4 :
				exit(0);
			default : 
			cout << "Please enter a valid choice " << endl ;
		}
		
	}

}
