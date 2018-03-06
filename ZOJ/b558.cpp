#include<iostream>
using namespace std;
int main()
{
	int a[500]={0},input,i;
	a[0]=1;
	for(i=1;i<=499;i++)
	{
		a[i]=a[i-1]+i;
	}
	while(cin>>input)
	{
		cout<<a[input-1]<<endl;
	}
	return 0;
}
