#include<iostream>
using namespace std;
int main()
{
    int input1,input2,n,ctr=1,max=1;
    while(cin>>input1>>input2)
    {
        cout<<input1<<" "<<input2<<" ";
        if(input1>input2)
        {
            int temp=input1;
            input1=input2;
            input2=temp;
        }
        for(int i=input1;i<=input2;i++)
        {
            n=i;
            while(n!=1)
            {
                ctr++;
                if(n%2!=0) n=3*n+1;
                else n/=2;
            }
            if(ctr>max) max=ctr;
            ctr=1;
        }
        cout<<max<<endl;
        max=1;
    }
    return 0;
}
