#include<iostream>
#include<string>
using namespace std;
class student
{
	private:
		string name;
		int rollno;
		long int phoneno;
		string address;
	public:
		void getdata();
		void displaydata();
};
void student::getdata()
		{
			cout<<"enter name ";
			cin>>name;
			cout<<"enter roll no. ";
			cin>>rollno;
			cout<<"enter phone number ";
			cin>>phoneno;
			cout<<"enter address ";
			cin>>address;
		}
void student::displaydata()
		{
			cout<<"name: "<<name<<endl;
			cout<<"roll no:"<<rollno<<endl;
			cout<<"phone number:"<<phoneno<<endl;
			cout<<"address : "<<address<<endl;
		}
int main()
{
	student s1,s2;
	s1.getdata();
	s2.getdata();
	cout<<"printing student data"<<endl;
	s1.displaydata();
	s2.displaydata();
}
