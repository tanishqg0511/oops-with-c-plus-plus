#include<iostream>
using namespace std;
class base
{
	public:
	virtual void display()
	{
		cout<<"displaying from base class"<<endl;
	}
	virtual void displaypure()=0;
};
class child:public base
{
	public:
	void display()
	{
		cout<<"displaying from child class"<<endl;
	}
	void displaypure()
	{
		cout<<"implementation of pure virtual function"<<endl;
	}
};
int main()
{
	base *p;
	child c;
	p=&c;
	p->display();
	p->displaypure();
}
