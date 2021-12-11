#include<iostream>
using namespace std;
class mammals
{
	public:
	void run()
	{
		cout<<"I am Mammal"<<endl;
	}
};
class Marineanimal
{
	public:
	void run1()
	{
		cout<<"I am Marine animal"<<endl;
	}
};
class Bluewhale:public mammals,public Marineanimal
{
	public:
	void run2()
	{
		cout<<"I belong to both the categories : Mammals as well as Marine animals"<<endl;
	}
};
int main()
{
	mammals obj1;
	cout<<"-------From class mammals-------"<<endl;
	obj1.run();
	Marineanimal obj2;
	cout<<"-------From class Marineanimals-------"<<endl;
	obj2.run1();
	Bluewhale obj3;
	cout<<"-------From class Bluewhale-------"<<endl;
	obj3.run();
	obj3.run1();
	obj3.run2();
}
