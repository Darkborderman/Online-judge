#include<iostream>
#include<string>
using namespace std;
int main()
{
    int number,money=0;
    while(cin>>number)
    {
        for(int i=0;i<=number-1;i++)
        {
            string cmd;
            cin>>cmd;
            if(cmd=="donate")
            {
                int donation;
                cin>>donation;
                money+=donation;
            }
            else if(cmd=="report")
            {
                cout<<money<<endl;
            }
        }
    }
    return 0;
}