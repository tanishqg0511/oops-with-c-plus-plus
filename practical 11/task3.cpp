#include<iostream>
using namespace std;
class A
{
	public:
	void display()
	{
		cout<<"from class A"<<endl;
	}
};
class B:public A
{
	public:
	void display1()
	{
		display();
		cout<<"from class B"<<endl;
	}
};
int main()
{
	B obj;
	obj.display1();
	obj.display();
}
