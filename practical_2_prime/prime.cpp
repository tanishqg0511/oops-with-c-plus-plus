#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number";
	cin>>n;
	int c=0;
	if(n==1){
	cout<<"the number you have entered is not prime";
	return 0;
	}
	for(int i=2;i<n/2;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c==0)
	cout<<n<<"is a prime number";
	else
	cout<<n<<"is not a prime";
}
	
