#include<iostream>
#include<ios>
#include<iomanip>
#include<string>
#include<sstream>
#include<istream>
using namespace std;
int main()
{
    char a,b,c;
    istringstream s("   123");
    s>>skipws>>a>>b>>c;
    cout<<"using skipws :"<<a<<b<<c<<endl;
    istringstream p("  123");
    p>>noskipws>>a>>b>>c;
    cout<<"using noskipws:"<<a<<b<<c<<endl;
    int n=50;
    cout<<hex<<"50 in hexadecimal:"<<n<<endl;
    cout<<dec<<"50 in decimal:"<<n<<endl;
    istringstream q("      this is testing");
    string line;
    getline(q>>ws,line);
    cout<<"using ws :"<<line<<endl;
    cout<<"using endl"<<endl;
    cout<<"using ends"<<ends;
    cout<<"using flush"<<flush;
    double f=3.145698;
    cout<<"using setprecision:"<<setprecision(4)<<f<<endl;
    cout<<"using setw:"<<setw(10)<<20<<endl;
}
