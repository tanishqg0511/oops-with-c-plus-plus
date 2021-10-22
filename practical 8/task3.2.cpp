#include<iostream>
using namespace std; 
int main()
{
	int a = 10;
	int *p;
	int **q;
	p = &a;
	q = &p;
	cout<<**q<<endl;
	int b=20;
	**q=b;
	cout<<**q<<endl;
}
