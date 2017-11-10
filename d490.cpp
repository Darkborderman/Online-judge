#include<iostream>
using namespace std;

int main()
{
	long long int start,end,i,sum=0;
	while(cin>>start>>end)
	{
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
