#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;	
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"Before Swapping\na & b: "<<a<<" "<<b<<endl;
	swap(&a,&b);
	cout<<"After Swapping\na & b: "<<a<<" "<<b<<endl;
}

