#include<iostream>
using namespace std;

int main()
{
	int input1,i,input2,j;
	double sum=0,a;
	while(cin>>input1)
	{
		for(i=1;i<=input1;i++)
		{
			while(cin>>input2)
			{
				for(j=1;j<=input2;j++)
				{
					cin>>a;
					sum=sum+a;
				}
				sum=sum/input2;
				printf("%.2f\n",sum);
				sum=0;
			}
		}
	}
}
