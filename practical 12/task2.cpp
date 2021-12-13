#include<iostream>
using namespace std;
class A
{
	public:
	int k;
	A(int y)
	{
		k=y;
	}
	~A()
	{
		cout<<"destructor of class A"<<endl;
	}
};
class B:public A
{
	public:
	int k;
	B(int y):A(7)
	{
		this->k=y;
	};
	void put1()
	{
		cout<<"class A :: k== "<<A::k<<endl;
		cout<<"class B :: k== "<<this->k<<endl;
	}
	~B()
	{
		cout<<"destructor of class B"<<endl;
	}
};
class C:public B
{
	public:
	int r;
	C(int y):B(6)
	{
		r=y;
	};
	void put2()
	{
		put1();
		cout<<"class C :: r== "<<this->r<<endl;
	}
	~C()
	{
		cout<<"destructor of class C"<<endl;
	}
};
int main()
{
	C obj(5);
	obj.put2();
	cout<<"running destructors"<<endl;
}
		
