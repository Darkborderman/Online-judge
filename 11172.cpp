#include<iostream>

using namespace std;

int main()
{
    int number;
    cin>>number;
    for(int i=0;i<=number-1;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a>b) cout<<">";
        else if(a<b) cout<<"<";
        else if(a==b) cout<<"=";
        cout<<endl;
    }
    return 0;
}