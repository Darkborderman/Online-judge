#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int number;
	float c=0,f=0;
	cin>>number;
	for(int i=1;i<=number;i++)
	{
		cin>>c>>f;
		c=c+(f/9)*5;
		printf("Case %d: %.2f\n",i,c);
		c=0; f=0;
	}
	return 0;
}
