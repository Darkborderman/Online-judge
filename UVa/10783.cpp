#include<iostream>
using namespace std;

int main()
{
    int times;
    while(cin>>times)
    {
        for(int i=0;i<=times-1;i++)
        {
            int a,b,total=0;
            cin>>a>>b;
            for(int j=a;j<=b;j++)
            {
                if(j%2) total=total+j;
            }
            cout<<"Case "<<i+1<<": "<<total<<endl;
        }
    }
    return 0;
}