#include<iostream>
#include<cstdio>
using namespace std;

int gcd(int a, int b);

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int output=gcd(a,b);
        printf("%10d%10d",a,b);
        if(output==1) cout<<"    Good Choice"<<endl;
        else cout<<"    Bad Choice"<<endl;
        cout<<endl;
    }

}

int gcd(int a, int b)
{
    a=a%b;
    if(a==0) return b;
    if(b==0) return a;
    gcd(b,a);
}