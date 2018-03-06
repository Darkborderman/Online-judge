#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char input[1005];
    int sum1=0,sum2=0,i;
    while(cin>>input)
    {
        if(input[0]=='0') return 0;
        for(i=0;i<=strlen(input)-1;i+=2)
        {
            sum1=sum1+(int)(input[i]-'0');
        }
        for(i=1;i<=strlen(input)-1;i+=2)
        {
            sum2=sum2+(int)(input[i]-'0');
        }
        if((sum1-sum2)%11==0||(sum2-sum1)%11==0)    cout<<input<<" is a multiple of 11."<<endl;
        if((sum1-sum2)%11!=0||(sum2-sum1)%11!=0)    cout<<input<<" is not a multiple of 11."<<endl;
        sum1=0;
        sum2=0;
    }
}
