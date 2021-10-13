#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	int c;
	cout<<"enter your choice";
	cin>>c;	
	time_t ttime = time(0);
    tm *local_time = localtime(&ttime);
	switch(c)
	{
		case 1: cout<<"year:"<<1900 + local_time->tm_year<<endl;
				break;
		case 2:cout<<"month:"<<1 + local_time->tm_mon<<endl;
				break;
		case 3:cout<<"date:"<<local_time->tm_mday<<endl;
				break;
		case 4:cout<<"time:"<<1 + local_time->tm_hour<<endl;
				break;
		default:cout<<"wrong choice"<<endl;
				break;
	}
}
