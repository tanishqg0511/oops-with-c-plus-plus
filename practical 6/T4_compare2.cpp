#include<iostream>
#include<string>
using namespace std;
int compare(string a,string b)
{
	if(a.size()==b.size())
	{
		for(int i=0;i<a.size();i++)
		{
			if(a[i]!=b[i])
				return 0;
		}
		return 1;
	}
	else
		return 0;
}
int main()
{
	string a="tanishq";
	string b="tanishq";
	cout<<(compare(a,b)?"equal":"not equal")<<endl;
}
