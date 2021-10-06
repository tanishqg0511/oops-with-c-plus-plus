#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a="";
	cin>>a;
	int l=a.size()-1;
	for(int i=0;i<a.size()/2;i++)
	{
		if(a[i]==a[l--])
		{
			cout<<"string is palindrome"<<endl;
			return 0;
		}
	}
	cout<<"string is not palindrome";
}
