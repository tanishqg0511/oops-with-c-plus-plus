#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout<<"USING endl"<<endl;
	cout<< "Line 1" << endl << "Line 2" << endl << "Line 3" << endl;
	cout<<"USING setw()"<<endl;
	cout<<setw(10)<<1234<<endl;
	cout<<"USING setfill()"<<endl;
	cout<<setw(15)<<setfill('*')<<1234<<endl;
}
