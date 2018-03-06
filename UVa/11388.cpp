#include<iostream>
using namespace std;

int main()
{
    int number;
    while(cin>>number)
    {
        for(int i=0;i<=number-1;i++)
        {
            int a,b;
            cin>>a>>b;
            if(b%a==0) cout<<a<<" "<<b<<endl;
            else cout<<"-1"<<endl;
        }
    }
}