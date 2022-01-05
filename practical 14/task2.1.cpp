#include<iostream>
using namespace std;
class base
{
	private:
	int *a;
	public:
	base()
	{
		a=new int;
		cout<<"base class constructor invoked"<<endl;
	}
	~base()
	{
		delete a;
		cout<<"base class destructor invoked"<<endl;
	}
};
class child:public base
{
	public:
	child()
	{
		cout<<"child class constructor invoked"<<endl;
	}
	~child()
	{
		cout<<"child class destructor invoked"<<endl;
	}
};
int main()
{
	base *p;
	child a;
	p=&a;
	delete p;
}
