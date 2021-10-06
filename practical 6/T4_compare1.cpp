#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s="";
	cout<<"enter a string "<<endl;
	getline(cin,s);
	string a="";
	cout<<"enter a string "<<endl;
	getline(cin,a);
	if((s.compare(a))==0)
		cout<<"equal"<<endl;
	else
		cout<<"not equal"<<endl;
}
	
