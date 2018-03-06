

#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    int ctr=0;
    int sum=0;
    int length;
    char input[202];
    while(cin>>input)
    {
        length=strlen(input);
        for(int i=0;i<=length-1;i++)
        {
            if((input[i]>='a')&&(input[i]<='z'))    sum=sum+(int)(input[i]-'a')+1;
            else if((input[i]>='A')&&(input[i]<='Z'))   sum=sum+(int)(input[i]-'A')+1;
            else if(length==1&&input[0]=='0') return 0;
            else ctr=1;
        }
        if(ctr) cout<<"Fail"<<endl;
        else    cout<<sum<<endl;
        sum=0;
        ctr=0;
    }
}
