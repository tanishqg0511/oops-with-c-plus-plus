#include<iostream>
using namespace std;
class base
{
    public:
    float add(float a,float b)
    {
        return (a+b);
    }
    int add(int a,int b)
    {
        return (a+b);
    }
};
class child:public base
{
    public:
    int add(int a,int b)
    {
        return (a+b+1);
    }
};
int main()
{
    base b;
    child c;
    cout<<"int + int = "<<b.add(2,2)<<endl;
    cout<<"float + float ="<<b.add(2.3f,2.7f)<<endl;
    cout<<"int + int ="<<c.add(5,5)<<endl;
    cout<<"float + float ="<<c.add(2.3f,2.7f)<<endl;
}
