#include<iostream>
using namespace std;
int main()
{
    int input;
    int x;
    int ctr[3]={0};
    while(cin>>input)
    {
        for(int i=1;i<=input;i++)
        {
            cin>>x;
            if(x==1) ctr[0]++;
            if(x==2) ctr[1]++;
            if(x==3) ctr[2]++;
        }
        for(int i=1;i<=ctr[0];i++)  cout<<"1 ";
        for(int i=1;i<=ctr[1];i++)  cout<<"2 ";
        for(int i=1;i<=ctr[2];i++)  cout<<"3 ";
    }
    return 0;
}
