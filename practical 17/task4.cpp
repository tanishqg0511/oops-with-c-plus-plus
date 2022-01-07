#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;
void print(vector<int> &x)
{
    vector<int> :: iterator it;
    for(it=x.begin();it != x.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void print(int *arr)
{
    for(int i=0;i<=(sizeof(arr)/sizeof(int));i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={5,2,4,9,5,10,77,3,63};
    vector<int> v(begin(arr),end(arr));
    cout<<"Printing vector :";
    print(v);
    sort(v.begin(),v.end());
    cout<<"Printing vector after sorting :";
    print(v);
    reverse(v.begin(),v.end());
    cout<<"Printing reversed vector :";
    print(v);
    cout<<"Max element of vector :"<<*max_element(v.begin(),v.end())<<endl;
    cout<<"Min element of vector :"<<*min_element(v.begin(),v.end())<<endl;
    cout<<"occurences of 5 in vector :"<<count(v.begin(),v.end(),5)<<endl;
    sort(begin(arr),end(arr));
    cout<<"Printing sorted array :";
    print(arr);
    if(binary_search(begin(arr),end(arr),77))
    cout<<"Element found"<<endl;
    else
    cout<<"Element not found"<<endl;
}
