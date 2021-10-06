#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="naman";
	int l=0,r=s.length()-1;
	while(l<r)
	{
		if(	s[l]==s[r])
		{
			l++;
			r--;
		}
		else
		{
			cout<<"not a palindrome string"<<endl;
			return 0;
		}
	}
	cout<<"the string is palindrome";
}
