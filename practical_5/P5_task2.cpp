#include<iostream>
using namespace std;
void charfunc()
{
	char c='g';
	cout<<c<<endl;
	cout<<sizeof(c)<<endl;
	cout<<"size of char is"<<sizeof(char)<<endl;
}
void boolfunc()
{
	bool a=(10>9);
	cout<<a<<endl;
	cout<<sizeof(a)<<endl;
	cout<<"size of bool is"<<sizeof(bool)<<endl;
}
void shortfunc()
{
	short s=300;
	cout<<s<<endl;
	cout<<sizeof(s)<<endl;
	cout<<"size of short is "<<sizeof(short)<<endl;
}
void intfunc()
{
	int a=4999;
	cout<<a<<endl;
	cout<<sizeof(a)<<endl;
	cout<<"size of int is"<<sizeof(int)<<endl;
}
void longfunc()
{
	long b=32;
	cout<<b<<endl;
	cout<<sizeof(b)<<endl;
	cout<<"size of long is "<<sizeof(long)<<endl;
}
void floatfunc()
{
	float s=2.453f;
	cout<<s<<endl;
	cout<<sizeof(s)<<endl;
	cout<<"size of float is "<<sizeof(float)<<endl;
}
void doublefunc()
{
	double s=2.453;
	cout<<s<<endl;
	cout<<sizeof(s)<<endl;
	cout<<"size of double is "<<sizeof(double)<<endl;
}
void longdouble()
{
	long double a=52.36L;
	cout<<a<<endl;
	cout<<sizeof(a)<<endl;
	cout<<"size of long double is"<<sizeof(long double)<<endl;
}
void widecharfunc()
{
	wchar_t a=L'0';
	cout<<a<<endl;
	cout<<sizeof(a)<<endl;
	cout<<"size of wide char is "<<sizeof(wchar_t)<<endl;
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
