#include<iostream>
using namespace std;
int main()
{
    long int number,input1,input2,output;
    while(cin>>number)
    {
        for(int i=1;i<=number;i++)
        {
            cin>>input1>>input2;
            output=(input1/3)*(input2/3);
            cout<<output<<endl;
        }
    }
}
