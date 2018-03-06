#include<stdio.h>
#include<stdlib.h>
int main()
{
	int k,i,ans=0;
	while(scanf("%d",&k)!=EOF)
	{
		i=1225*(3+48*k)/3 ;
		ans=i+50;
		cout<<ans<<endl;
		ans=0;
	}
	return 0;
}
