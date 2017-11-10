#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b)
    {
        while(a>0)
        {
            if(b>a)
            {
                c=a;
                a=b;
                b=c;
            }
            a=a%b;
        }
    cout<<b<<endl;
  }
    return 0;
}
