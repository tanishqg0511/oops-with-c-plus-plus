#include<iostream>
using namespace std;
namespace first
{
	void saysomething()
	{
		cout<<"hello";
	}
}
namespace second
{
	void saysomething()
	{
		cout<<"hello world";
	}
}
int main()
{
	first::saysomething();
	second::saysomething();
	return 0;
}
