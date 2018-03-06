#include<iostream>
#include<string>
using namespace std;

int main()
{
    string input;
    int counter=1;
    while(cin>>input)
    {
        if(input=="*") break;
        if(input=="Hajj") cout<<"Case "<<counter<<": Hajj-e-Akbar"<<endl;
        if(input=="Umrah") cout<<"Case "<<counter<<": Hajj-e-Asghar"<<endl;
        counter++;
    }
    return 0;
}