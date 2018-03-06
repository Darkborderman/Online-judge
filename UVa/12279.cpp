#include<iostream>
using namespace std;

int main()
{
    int number,counter=1;
    while(cin>>number&& number!=0)
    {
        int zero=0,nonzero=0;
        for(int i=0;i<=number-1;i++)
        {
            int temp;
            cin>>temp;
            if(temp==0) zero++;
            else nonzero++;
        }
        cout<<"Case "<<counter<<": "<<nonzero-zero<<endl;
        counter++;
    }
    return 0;
}