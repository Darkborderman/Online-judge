#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	int input={0},a[3000]={0},output[3]={0},i;
	cin>>input;
	for(i=0;i<=input-1;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<=input-1;i++)
	{
		if(a[i]%3==0) output[0]++;
		if(a[i]%3==1) output[1]++;
		if(a[i]%3==2) output[2]++;
	}
	cout<<output[0]<<" "<<output[1]<<" "<<output[2];
return 0;
}
