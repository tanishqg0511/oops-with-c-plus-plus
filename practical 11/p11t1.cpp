#include<iostream>
using namespace std;

class A
{
	public:
	int k;
	void display()
	{
		cout<<"Running class A"<<endl;
	}
};
class B: virtual public A
{
	public:
	void display1()
	{
		cout<<"Running class B"<<endl;
	}
};
class C: virtual public A
{
	public:
	void display2()
	{
		cout<<"Running class C"<<endl;
	}
};
class D: public B,public C
{
	public:
	void display3()
	{
		cout<<"Running class D"<<endl;
	}
};
int main()
{
	D d;
	d.display1();
	d.display2();
	d.display3();
	d.display();
	d.k=100;
}
