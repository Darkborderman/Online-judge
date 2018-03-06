#include<iostream>
using namespace std;

int main()
{
    int line,a,b;
    while(cin>>line)
    {
        for(int i=1;i<=line;i++)
        {
            cin>>a>>b;
            if(a>b) cout<<">"<<endl;
            if(a==b) cout<<"="<<endl;
            if(a<b) cout<<"<"<<endl;
        }
    }
}
