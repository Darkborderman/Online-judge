#include<iostream>
using namespace std;

int main()
{
	long int n,m,sum=0;
	int a[100000],i,j,g,h,b[100001]={0};
	while(cin>>n>>m)
	{
		//
		for(i=0;i<=n-1;i++)
		{
			cin>>a[i];
		}
		//
		b[0]=a[0];
		b[1]=a[1]+b[0];
		///...
		for(i=1;i<=n;i++)
		{
			b[i]=a[i]+b[i-1];
		}
		//
		for(j=0;j<=m-1;j++)
		{
			cin>>g>>h;
			sum=b[h-1]-b[g-2];
			cout<<sum<<endl;
			sum=0;
		}
		
	}
}
