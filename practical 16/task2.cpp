#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter values ";
    cin>>a>>b;
    try
    {
        if(b==0)
        throw b;
        else
        cout<<a/b;
    }
    catch(int x){
        cout<<"2nd operand cannot be 0";
    }
}
