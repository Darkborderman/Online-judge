#include<iostream>
using namespace std;

int main()
{
    int loop;
    while(cin>>loop)
    {
        for(int i=0;i<=loop-1;i++)
        {
            int farmer;
            cin>>farmer;
            unsigned long long int total=0;
            for(int i=0;i<=farmer-1;i++)
            {
                unsigned long long int area,animal,level;
                cin>>area>>animal>>level;
                total=total+area*level;
            }
            cout<<total<<endl;
        }
    }
    return 0;
}