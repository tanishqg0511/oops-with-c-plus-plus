#include<iostream>
using namespace std;
class A
{
	private:
	int a=10;
	public:
	int b=20;
	protected:
	int c=30;
};
class B:public A
{
	public:
	void put()
	{
		cout<<"Accessing using public access specifier"<<endl;
		cout<<"b= "<<b<<endl;
	}
};
class C:private A
{
	public:
	void put1()
	{
		cout<<"Accessing using private access specifier"<<endl;
		cout<<"b= "<<b<<endl;
		cout<<"c= "<<c<<endl;
	}
};
class D:protected A
{
	public:
	void put2()
	{
		cout<<"Accessing using protected access specifier"<<endl;
		cout<<"b= "<<b<<endl;
		cout<<"c= "<<c<<endl;
	}
};
int main()
{
	B obj1;
	obj1.put();
	C obj2;
	obj2.put1();
	D obj3;
	obj3.put2();
	cout<<"accesing from main function"<<endl;
	cout<<"b= "<<obj1.b<<endl;
}
		
