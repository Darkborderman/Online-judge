#include<iostream>
using namespace std;

int main()
{
    unsigned long long int gen[81]={0};
    gen[0]=1; gen[1]=1;
    for(int i=2;i<=80;i++)
    {
        gen[i]=gen[i-1]+gen[i-2];
    }
    int input;
    while(cin>>input&& input!=0)
    {
        cout<<gen[input]<<endl;
    }
}