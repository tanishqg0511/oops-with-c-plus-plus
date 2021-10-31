#include<iostream>
using namespace std;
class area
{
	int length,side,breadth;
	public:
		area(int s);
		area(int l,int b);
};
area::area(int s)
{
	this->side=s;
	cout<<"the area of square is "<<(side*side)<<endl;
}
area::area(int l,int b)
{
	this->length=l;
	this->breadth=b;
	cout<<"the area of rectangle is "<<(length*breadth)<<endl;
}
int main()
{
	int s,l,b;
	cout<<"enter side of square ";
	cin>>s;
	cout<<"enter length and breadth of rectange ";
	cin>>l>>b;
	area a1=area(s);
	area a2=area(l,b);
}
