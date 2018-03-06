#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int sum=0,i,start,end,number,j;
	while(cin>>number)
	{
		for(j=1;j<=number;j++)
		{
			cin>>start>>end;
			for(i=1;i<=sqrt(end);i++)
			{
				if((i*i>=start)&&(i*i<=end))
				sum=sum+i*i;
			}
			cout<<"Case "<<j<<": "<<sum<<endl;
			sum=0;
		}
	}
	return 0;
}
