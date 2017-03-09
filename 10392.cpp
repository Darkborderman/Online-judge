#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#define MAX 10000000
using namespace std;

bool prime[MAX+10];
void sieve()
{
	for(int i=0;i<=MAX-1;i++) prime[i]=true;
	prime[0]=prime[1]=false;
	for(int i=2;i<=30000;i++)
	{
		if(prime[i])
		{
			for(int j=i*i;j<MAX;j=j+i)
			prime[j]=false;
		}
	}
}
int main()
{
	sieve();
	long long int input;
	while(cin>>input&&input>0)
	{
		for(int i=0;i<=MAX-1;i++)
		if(prime[i])
		{
			while(input%i==0)
			{
				cout<<"    "<<i<<endl;
				input/=i;
			}
		}
		if(input!=1) cout<<"    "<<input<<endl;
		cout<<endl;
	}
}
