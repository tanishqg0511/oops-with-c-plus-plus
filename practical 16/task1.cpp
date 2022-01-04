#include<iostream>
using namespace std;
template <class T>
T add(T a,T b)
{
    return (a+b);
}
template <class T,class U,class V>
V add(T a,U b)
{
    return (a+b);
}
int main()
{
    int a=4,b=2;
    float x=2.1,y=3.4;
    cout<<add(a,b)<<endl;
    cout<<add(x,y)<<endl;
}
