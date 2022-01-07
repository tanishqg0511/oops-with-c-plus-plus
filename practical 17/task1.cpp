#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &v)
{
    vector<int> :: iterator it;
    for ( it = v.begin(); it != v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;    
}
int main()
{
    vector<int> v;
    cout<<"numbers you want to enter ";
    int n,a;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"enter a number";
        cin>>a;
        v.push_back(a);
    }
    cout<<"Printing the vector :";
    print(v);
    cout<<"size of vector :"<<v.size()<<endl;
    cout<<"capacity of vector :"<<v.max_size()<<endl;
    v.resize(10);
    cout<<"size of vector after resizing :"<<v.size()<<endl;
    if(v.empty())
    cout<<"the vector is empty"<<endl;
    else
    cout<<"the vector is not empty "<<endl;
}
