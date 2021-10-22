#include<iostream>
#include<math.h>
using namespace std;
void series(int n)
{
	if(n==1){
		cout<<2<<" ";
		return;
	}
	series(n-1);
	cout<<(pow(n,n) +n)<<" ";
}		
int main()
{
	int n;
	cin>>n;
	cout<<"Series\n";
	series(n);
	return 0;
}
