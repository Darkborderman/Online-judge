#include<iostream>
using namespace std;
int main()
{
    long int n;
    while(cin>>n)
    {
        if(n==0) return 0;
        cout<<n*(n+1)*((2*n)+1)/6<<endl;
    }
}
