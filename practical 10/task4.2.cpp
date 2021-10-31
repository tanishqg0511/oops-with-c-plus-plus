#include<iostream>
using namespace std;
class obj
{
	int n;
	public:
	void get(int n)
	{
		this->n=n;
	}
	void display()
	{
		cout<<"sum : : "<<n;
	}
	obj operator +(obj &num)
	{
		obj x;
		x.n=this->n+num.n;
		return x;
	}
};
int main()
{
	obj obj1,obj2,sum;
	obj1.get(6);
	obj2.get(13);
	sum=obj1+obj2;
	sum.display();
}
