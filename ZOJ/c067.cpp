#include<iostream>
using namespace std;
int main()
{
    int line,input[75]={0},avg=0,sum=0,ctr=0;
    while(cin>>line)
    {
        if(line==0) return 0;
        ctr++;
        for(int i=0;i<=line-1;i++)
        {
            cin>>input[i];
            avg=avg+input[i];
        }
        avg=avg/line;
        for(int i=0;i<=line-1;i++)
        {
            if(input[i]>avg)   sum=sum+(input[i]-avg);
            if(input[i]<avg)   sum=sum+(avg-input[i]);
        }
        cout<<"Set #"<<ctr<<endl;

        cout<<"The minimum number of moves is "<<sum/2<<"."<<endl;
        avg=0;
        sum=0;
    }
    return 0;
}
