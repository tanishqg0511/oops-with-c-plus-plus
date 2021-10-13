#include<iostream>
using namespace std;
int main()
{
	int c;
	cout<<"enter your choice";
	cin>>c;
	switch(c)
	{
		case 1: cout<<"year:2021"<<endl;
				break;
		case 2:cout<<"month:october"<<endl;
				break;
		case 3:cout<<"date:13/10/2021"<<endl;
				break;
		case 4:cout<<"time:09:25 AM"<<endl;
				break;
		default:cout<<"wrong choice"<<endl;
				break;
	}
}
