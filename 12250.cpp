#include<iostream>
#include<string>
using namespace std;

int main()
{
    int counter=1;
    string input;
    while(cin>>input)
    {
        if(input=="#") break;
        else
        {
            cout<<"Case "<<counter<<": ";
            counter++;
            if(input=="ZDRAVSTVUJTE") cout<<"RUSSIAN";
            else if(input=="HALLO") cout<<"GERMAN";
            else if(input=="HELLO") cout<<"ENGLISH";
            else if(input=="HOLA") cout<<"SPANISH";
            else if(input=="CIAO") cout<<"ITALIAN";
            else if(input=="BONJOUR") cout<<"FRENCH";
            else cout<<"UNKNOWN";
            cout<<endl;
        }
    }
    return 0;
}