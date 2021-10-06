#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string a="";
	cout<<"enter a string "<<endl;
	getline(cin,a);
	cout<<"reversed string manually"<<endl;
	for(int i=a.size()-1;i>=0;i--)
	{
		cout<<a[i];
	}
	cout<<endl;
	reverse(a.begin(),a.end());
	cout<<"reversed string using function"<<endl<<a<<endl;
	return 0;
}
