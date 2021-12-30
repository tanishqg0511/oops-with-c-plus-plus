#include<iostream>
using namespace std;
class base
{
	public:
	base()
	{
		cout<<"base class constructor invoked"<<endl;
	}
	virtual ~base()
	{
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
	child d;
	p=&d;
}
