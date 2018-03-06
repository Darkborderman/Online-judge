#include<iostream>
using namespace std;
int main()
{
    int line,age[101]={0},input,j,i;
    while(cin>>line)
    {
        if(line==0) return 0;
        for(i=0;i<=line-1;i++)
        {
            cin>>input;
            age[input]++;
        }
        for(i=1;i<=100;i++)
        {
            for(j=1;j<=age[i];j++)
            {
                cout<<i<<" ";
            }
        }
        for(i=0;i<=100;i++)
        {
            age[i]=0;
        }
        cout<<endl;
    }
}
