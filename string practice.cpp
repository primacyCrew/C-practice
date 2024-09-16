#include<iostream>
#include<string>
using namespace std;
int main()
{
    //user input
    cout<<"Enter first name:"<<endl;
    string name;
    getline(cin, name);
    //access string
    cout<<"Type rest part:"<<endl;
    string another;
    getline(cin, another);
    string fulname= name+" "+another;
    cout<<"Your full name is : "<<fulname<<endl;
    cout<<"Your name length is : "<<fulname.length()<<endl;
    cout<<"Enter index number: "<<endl;
    int n;
    cin>>n;
    cout<<"Your character in index is : "<<fulname[n]<<endl;
    return 0;
}
