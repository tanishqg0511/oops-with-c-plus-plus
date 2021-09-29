#include<iostream>
using namespace std;
namespace first
{
	void add(int a,int b)
	{
		cout<<"sum is "<<a+b<<endl;
	}
}
namespace second
{
	void add(float a,float b)
	{
		cout<<"sum is "<<a+b<<endl;
	}
}
using namespace first;
int main()
{
	add(1,2);
	add(1.5f,2.4f);
	add(2,2.5f);
	add(0,0);
	add(2.3,1);
}
