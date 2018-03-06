#include<iostream>
using namespace std;

int main()
{
	long long int start,end,i,sum=0,swap;
	while(cin>>start>>end)
	{
		if(start>=end)
		{
			swap=start;
			start=end;
			end=swap;
		}
		for(i=start;i<=end;i++)
		{
			if(i%2==0)
			sum=sum+i;
		}
		cout<<sum;
		sum=0;
	}
	return 0;
}
