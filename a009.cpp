#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i;
	char a[200];
	while(cin>>a)
	{
		for(i=0;i<=strlen(a)-1;i++)
		a[i]=int(a[i])-7;
		for(i=0;i<=strlen(a)-1;i++)
		cout<<a[i];
		cout<<endl;
	}
}
