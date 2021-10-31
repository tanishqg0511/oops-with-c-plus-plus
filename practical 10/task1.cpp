#include<iostream>
using namespace std;
class directory
{
	string name;
	char addr[100];
	long int number;
	string head;
	
	public:
	void getdata()
	{
		cout<<"enter address";
		cin.ignore();
		cin.getline(addr,100);
		cout<<"enter name";
		cin>>name;
		cout<<"enter mobile number";
		cin>>number;
		cout<<"enter head of family";
		cin>>head;
	}
	void display(int i)
	{
		cout<<i<<" "<<name<<endl;
		cout<<addr<<endl;
		cout<<number<<endl;
		cout<<head<<endl;
	}
};
int main()
{
	int n;
	cout<<"enter no. of data you want to enter in directory";
	cin>>n;
	directory obj[n];
	for(int i=0;i<n;i++)
	{
		obj[i].getdata();
	}
	for(int i=0;i<n;i++)
	{
		obj[i].display(i);
	}
}
