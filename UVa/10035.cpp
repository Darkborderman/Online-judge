#include<iostream>
using namespace std;

int main()
{
    unsigned long long int input[2];
    while(cin>>input[0]>>input[1])
    {
        int counter=0;
        if(input[0]==0&&input[1]==0) break;
        int divide[2][11]={0};
        int result[12]={0};
        for(int i=0;i<=1;i++)
        {
            for(int j=0;j<=10;j++)
            {
                divide[i][j]=input[i]%10;
                input[i]/=10;
            }
        }
        for(int i=0;i<=10;i++)
        {
            result[i]+=divide[0][i]+divide[1][i];
            if(result[i]>=10) counter++;
            result[i+1]+=result[i]/10;
            result[i]%=10;
        }
        if(counter==0) cout<<"No carry operation."<<endl;
        else if(counter==1) cout<<"1 carry operation."<<endl;
        else cout<<counter<<" carry operations."<<endl;
    }
    return 0;
}