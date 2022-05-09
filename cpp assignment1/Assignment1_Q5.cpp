 #include<bits/stdc++.h>
 using namespace std;
 struct Temp
 {
 	private:
 	string name;
 	double tem_farenheit,tem_centigrate;
 	public:
 		void input()
 		{
 			int i=0;
 			cout<<"\n enter your name : ";
 			getline(cin>>ws,name);
 			if(name.size()<15)
 			{
 				name=name+"_______________";
			 }
 			name.resize(15);
			cout<<"\n enter body temperature in farenheit : ";
			cin>>tem_farenheit;
		 }
		 void output()
		 {
		 	tem_centigrate=((tem_farenheit-32)*5)/9;
		 	cout<<"\n Your Name is "<<name;
		 	cout<<"\n Temperature in Centigrate is "<<fixed<<setprecision(1)<<tem_centigrate;
		 }
 };
 using namespace std;
 int main()
 {
 	int n;
 	cout<<"\n enter number of persons : ";
 	cin>>n;
 	struct Temp p[n];
 	for(int i=0;i<n;i++)
 	{
 		p[i].input();
	}
	system("CLS");
		for(int i=0;i<n;i++)
 	{
 		p[i].output();
	}
	return 0;
 }
