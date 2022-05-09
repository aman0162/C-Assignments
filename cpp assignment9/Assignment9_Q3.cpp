#include<bits/stdc++.h>
using namespace std;
template<class T>
class queue1
{
	int front1;
	int vsize;
	vector<T>v;
	public:
		queue1()
		{
			front1=-1;
			vsize=0;
		}
		void enqueue1(T val);
		void dequeue1();
		bool is_empty();
		void traverse1();
};
template<class T>
void queue1<T>::enqueue1(T val)
{
	if(front1==-1)
	front1=0;
	v.push_back(val);
	cout<<"\n\t Value Inserted "<<endl;
	vsize++;
}
template<class T>
void queue1<T>::dequeue1()
{

	if(front1==-1 || vsize==0)
	{
		cout<<"\n \tqueue is empty \n";
	}
	else{
		
	cout<<"\n\t"<<v[front1]<<" is deleted "<<endl;
	front1++;
	vsize--;
	}
}
template<class T>
bool queue1<T>::is_empty()
{
	if(vsize==0 || front1==-1)
	return 1;
	return 0;
}
template<class T>
void queue1<T>::traverse1()
{
	cout<<endl<<"\t";
	cout<<"Elements is Queue are \n\t";
	int j=front1;
	for(int i=0;i<vsize;i++){
		
	cout<<v[j++]<<"  ";}
}
int main()
{
	queue1<int> q1;
	int choice;
	int data;
	while(true){
		cout << "\n\tMenu " << endl ;
		cout << "\t1 : Enqueue" << endl;
		cout <<"\t2 : Dequeue" << endl ;
		cout << "\t3 : Display " << endl ;	
		cout << "\t4 : Exit" << endl;
		
		cout << "\tPlease enter your choice : " << endl;
		cin >> choice ;
		
		switch(choice){
			case 1 :
				cout << "\n\tPlease enter element to be inserted in queue : " ;
				cin >> data;
				q1.enqueue1(data);
				break;
			case 2 :
				q1.dequeue1();
				break;
			case 3 :
			q1.traverse1();
				break;
			case 4 :
				exit(0);
		}
		
	}
	return 0;
}
