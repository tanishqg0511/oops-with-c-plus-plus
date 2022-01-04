#include<iostream>
#include<fstream>
#include<ios>
#include<string>
using namespace std;
int main()
{
    // writing to a file
    ofstream myfile;
    myfile.open("task1.txt",ios::out);
    string data;
    cout<<"enter data to be put in file";
    getline(cin,data);
    myfile<<data;
    myfile.close();
    // reading from a file
    ifstream fp;
    fp.open("task1.txt",ios::in);
    cout<<"read from file: ";
    while(getline(fp,data))
    cout<<data<<" ";
    fp.close();
    //writing from a file
    ofstream fp1;
    ifstream fp2;
    fp1.open("copyfile.txt",ios::out);
    fp2.open("task1.txt",ios::in);
    getline(fp2,data);
    fp1<<data;
    fp1.close();
    fp2.close();
}
