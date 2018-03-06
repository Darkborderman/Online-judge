#include<iostream>

using namespace std;

int main()
{
    int number;
    while(cin>>number)
    {
        for(int i=0;i<=number-1;i++)
        {
            int x,y;
            cin>>x>>y;
            cout<<(x/3)*(y/3)<<endl;
        }
    }
    return 0;
}