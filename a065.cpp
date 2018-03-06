#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string a;
	int change[10]={0},i=0,output[6]={0};
	while(cin>>a)
	{
	for(i=0;i<=6;i++)
	{
		change[i]=int(a[i])-64;
	}
	for(i=0;i<=5;i++)
	{
		if(change[i]>=change[i+1])	output[i]=change[i]-change[i+1];
		if(change[i]<change[i+1])	output[i]=change[i+1]-change[i];
	}
	for(i=0;i<=5;i++)
	{
		cout<<output[i];
	}
	cout<<endl;
}
	return 0;
}
