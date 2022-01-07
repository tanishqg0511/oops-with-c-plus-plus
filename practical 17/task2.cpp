#include<iostream>
#include<list>
using namespace std;
void print(list<int> &l)
{
    list<int> :: iterator iter;
    for ( iter = l.begin(); iter != l.end(); iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> l;
    cout<<"numbers you want to enter in list ";
    int n,a;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"enter number ";
        cin>>a;
        l.push_back(a);
    }
    cout<<"Printing the list"<<endl;
    print(l);
    cout<<"size of list :"<<l.size()<<endl;
    l.sort();
    cout<<"Printing sorted list"<<endl;
    print(l);
    l.reverse();
    cout<<"Printing reverse list"<<endl;
    print(l);
}
