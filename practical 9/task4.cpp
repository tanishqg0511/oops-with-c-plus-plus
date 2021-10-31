#include<iostream>
using namespace std;
class student
{
	private:
		string name;
		int age;
		int marks;
	public:
		void getdata()
		{
			cout<<"enter name ";
			cin>>name;
			cout<<"enter age ";
			cin>>age;
			cout<<"enter marks ";
			cin>>marks;
		}
		friend int addmarks(student,student,student);
};
int addmarks(student s1,student s2,student s3)
{
	return (s1.marks+s2.marks+s3.marks);
}
int main()
{
	student s1,s2,s3;
	s1.getdata();
	s2.getdata();
	s3.getdata();
	int a=addmarks(s1,s2,s3);
	cout<<"Total marks= "<<a;
}
