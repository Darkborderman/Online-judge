#include<iostream>
using namespace std;

int main()
{
	int input,leap,a[3][100]={0},i,min=10000,sum=0,j;
	while(cin>>input)
	{
		for(j=1;j<=input;j++)
		{
			cin>>leap;
			for(i=0;i<=leap-1;i++)
			{
				cin>>a[0][i]>>a[1][i];
				a[2][i]=a[0][i]*60+a[1][i];
				sum=sum+a[2][i];
				if(min>=a[2][i]) min=a[2][i];
			}
			sum=sum/leap;
			cout<<"Track "<<j<<":"<<endl;
			cout<<"Best Lap: "<<min/60<< " minute(s) "<<min%60<<" second(s)."<<endl;
			cout<<"Average: "<<sum/60<< " minute(s) "<<sum%60<<" second(s)."<<endl;
			sum=0;
			min=10000;
		}
	}
		return 0;
}
