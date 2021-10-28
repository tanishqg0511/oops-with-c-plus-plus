#include<iostream>
#include<string>
using namespace std;
#define MAX 100
class student
{
	private:
		string name;
		int age;
	    int year;
		char sec;
	public:
		void getdata();
		void putdata();
};
void student::getdata()
{
	cout<<"enter name ";
	cin>>name;
	cout<<"enter age ";
	cin>>age;
	cout<<"enter year ";
	cin>>year;
	cout<<"enter section ";
	cin>>sec;
}
int main()
{
	student s[MAX];
	int i=0,n=0,count=0;
	do{
	count++;
	s[i++].getdata();
	cout<<"if you want to continue enter 1";
	cin>>n;
	}while(n!=0);
	cout<<"total number of students in college are "<<count;	
}
