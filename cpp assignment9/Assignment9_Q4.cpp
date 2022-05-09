#include<bits/stdc++.h>
using namespace std;
class record
{
	map<string,long long>m;
	int size;
	public:
		record()
		{
			size=0;
		}
		void insert()
		{
			long long no,num;
			int tot=0;
			string name;
			char ch='n';
			cout<<"\n Enter Name : ";
			getline(cin>>ws,name);
			cout<<"\n Enter Mobile Number of 10 digit only : ";
			cin>>no;
			num=no;
			while(num>0)
   			{
      			tot++;
      			num = num/10;
  			 }
  			 if(tot!=10)
			cout<<"\n Invalid Mobile Number ";
			else
			{
				m[name]=no;
			}
			cout<<"\n Wanna add more number press y ";
			cin>>ch;
			if(ch=='y'||ch=='Y')
			this->insert();

		}

		void display()
		{
			for(auto val:m)
			{
				cout<<"\n Name "<<val.first<<"\t Mobile Num : "<<val.second<<endl;
			}
		}
};
int main()
{
	int choice;
	record r1;
		while(true){
		cout << "\n\t Menu " << endl ;
		cout << "\t1 : Insert " << endl;
		cout << "\t2 : Display " << endl ;
		cout << "\t3 : Exit" << endl;

		cout << "\tPlease enter your choice : " << endl;
		cin >> choice ;

		switch(choice){
			case 1 :

				r1.insert();
				break;
			case 2 :
			r1.display();
				break;
			case 3 :
				exit(0);
		}

	}
	return 0;
}
