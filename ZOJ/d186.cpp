#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int  a,b,i,counter=0;
    while(cin>>a>>b)
    {
        if(a==0&&b==0) break;
        for(i=sqrt(a);i<=sqrt(b);i++)
        {
            if((i*i>=a)&&(i*i<=b)) counter++;
        }
        cout<<counter<<endl;
        counter=0;
    }
    return 0;
}
