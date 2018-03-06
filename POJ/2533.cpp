#include<iostream>
using namespace std;
void find(int* ,int*);

int length;
int main()
{

	while(cin>>length)
	{
		int num[length];
		int LIS[length];
		int max=0;
		for(int i=0;i<=length-1;i++) cin>>num[i];
		find(num,LIS);
		for(int i=0;i<=length-1;i++)
		{
			if(max<=LIS[i]) max=LIS[i];
		}
		cout<<max<<endl;
	}
	return 0;
}

void find(int num[],int LIS[])
{
	for(int i=0;i<=length-1;i++)
	{
		LIS[i]=1;
		for(int j=0;j<i;j++)
		{
			if(num[j]<num[i]&&LIS[j]+1>LIS[i]) LIS[i]=LIS[j]+1;
		}
	}
}
