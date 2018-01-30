#include<iostream>
#include<string>
using namespace std;

int main()
{
    int number;
    while(cin>>number)
    {
        string input;
        for(int i=0;i<=number-1;i++)
        {
            cin>>input;
            int one=0,two=0;
            if(input.length()==3)
            {
                if(input[0]=='o') one++;
                else if(input[0]=='t') two++;
                if(input[1]=='n') one++;
                else if(input[1]=='w') two++;
                if(input[2]=='e') one++;
                else if(input[2]=='o') two++;
                cout<< ((one>two) ? "1" : "2");
            }
            else cout<<"3";
            cout<<endl;
        }
    }
    return 0;
}