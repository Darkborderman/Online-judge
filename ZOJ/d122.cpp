#include<iostream>
using namespace std;
int main()
{
    long int input;
    int ctr=0;
    while(cin>>input)
    {
        while(input>=5)
        {
            ctr=ctr+(input/5);
            input=input/5;
        }
        cout<<ctr<<endl;
        ctr=0;
    }
}
