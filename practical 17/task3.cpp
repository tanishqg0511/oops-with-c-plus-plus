#include<iostream>
#include<map>
#include<string>
using namespace std;
void print(map<int,string> &m1)
{
    map<int,string> :: iterator it;
    for ( it = m1.begin(); it != m1.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}
int main()
{
    map<int,string> m1;
    m1.insert({2,"ankur"});
    m1.insert({1,"sarthak"});
    m1.insert({5,"sumit"});
    m1.insert({9,"ritu"});
    m1.insert({7,"patrick"});
    m1.insert({15,"raj"});
    cout<<"Printing map"<<endl;
    print(m1);
    map<int,string> :: iterator iter;
    cout<<"find an element as key from this map"<<endl;
    for(iter= m1.find(5); iter != m1.end(); iter++)
    {
        cout<<iter->first<<iter->second<<endl;
    }
    map<int,string> m2;
    m2=m1;
    cout<<"printing new map"<<endl;
    print(m2);
    m1.erase(2);
    cout<<"printing after remove a record"<<endl;
    print(m1);
    cout<<"size of map :"<<m1.size()<<endl;
    cout<<"max size of map :"<<m1.max_size()<<endl;
    if(m1.empty())
    cout<<"the map is empty"<<endl;
    else
    cout<<"the map is not empty"<<endl;
    m1.clear();
}
