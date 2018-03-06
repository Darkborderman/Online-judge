#include<iostream>
#include<string>
using namespace std;

int main()
{
    string input[2];
    while(cin>>input[0]>>input[1])
    {
        int mult[2][260]={0},result[520]={0};
        int length[2];
        for(int i=0;i<=1;i++)
        {
            length[i]=input[i].length();
            for(int j=0;j<=length[i]-1;j++)
            {
                mult[i][length[i]-j-1]=input[i][j]-'0';
            }
        }
        for(int i=0;i<=length[0]-1;i++)
        {
            for(int j=0;j<=length[1]-1;j++)
            {
                result[i+j]+=mult[0][i]*mult[1][j];
                result[i+j+1]+=result[i+j]/10;
                result[i+j]%=10;
            }
        }
        
        int flag=0;
        for(int i=length[0]+length[1];i>=0;i--)
        {
            if(flag==0 && result[i]==0);
            else if(flag==0 && result[i]!=0) 
            {
                flag=1;
                cout<<result[i];
            }
            else if(flag==1) cout<<result[i];
        }
        if(mult[0][length[0]-1]==0||mult[1][length[1]-1]==0) cout<<"0";
        cout<<endl;
    }
    return 0;
}