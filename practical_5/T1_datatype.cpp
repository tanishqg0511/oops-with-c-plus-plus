#include<iostream>
using namespace std;
void charfunc()
{
	char c='g';
	cout<<c<<endl;
}
void boolfunc()
{
	bool a=(10>9);
	cout<<a<<endl;
}
void shortfunc()
{
	short s=300;
	cout<<s<<endl;
}
void intfunc()
{
	int a=4999;
	cout<<a<<endl;
}
void longfunc()
{
	long b=32;
	cout<<b<<endl;
}
void floatfunc()
{
	float s=2.453f;
	cout<<s<<endl;
}
void doublefunc()
{
	double s=2.453;
	cout<<s<<endl;
}
void longdouble()
{
	long double a=52.36L;
	cout<<a<<endl;
}
void widecharfunc()
{
	wchar_t a=L'0';
	cout<<a<<endl;
}
int main()
{
	charfunc();
	boolfunc();
	shortfunc();
	intfunc();
	longfunc();
	floatfunc();
	doublefunc();
	longdouble();
	widecharfunc();
}
