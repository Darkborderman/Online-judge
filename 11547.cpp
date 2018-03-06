#include<iostream>
using namespace std;

int main()
{
    int number;
    while(cin>>number)
    {
        for(int i=0;i<=number-1;i++)
        {
            int input;
            cin>>input;
            input=((((input*63)+7492)*5)-498);
            if(input<=0) input*=-1;
            cout<<(input/10)%10<<endl;
        }
    }
}