#include<iostream>
using namespace std;
int main()
{
    int i,j;
    while(cin>>i>>j)
    {
        if(i>j&&j>=1)   cout<<j+1<<endl;
        if(i==j) cout<<i<<endl;
    }

}
