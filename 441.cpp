#include<iostream>

using namespace std;

int length=0,choice[13]={0},option=0,answer[6],ischoose[13]={0};
bool isfirst=true;

int recur(int x,int i);

int main()
{
    while(cin>>option)
    {
        if(option==0) return 0;
        if(isfirst)
        {
            isfirst=false;
        }
        else{ cout<<endl;}
        for(int i=0;i<=option-1;i++)
        {
            int num;
            cin>>num;
            choice[i]=num;
        }
        recur(0,0);
    }
    return 0;
}

int recur(int nest,int th)
{
    if(nest==6)
    {
        for(int i=0;i<=4;i++) cout<<answer[i]<<" ";
        cout<<answer[5]<<endl;
        return 0;
    }
    for(int i=th;i<=option-1;i++)
    {
        if(!ischoose[i])
        {
            ischoose[i]=1;
            answer[nest]=choice[i];
            recur(nest+1,i+1);
            ischoose[i]=0;
        }
    }
}