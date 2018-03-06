#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int front,end;
    while(cin>>front>>end&&(front!=-1&&end!=-1))
    {
        int a=abs(front-end);
        int b=100-a;
        if(a>b) cout<<b<<endl;
        else cout<<a<<endl;
    }
    return 0;
}