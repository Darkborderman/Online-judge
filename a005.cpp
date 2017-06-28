#include<iostream>
using namespace std;
int main()
{
	int a[20][5]={0},input,i,j;
	while(cin>>input)
	{
		for(i=0;i<=input-1;i++)
		{
			for(j=0;j<=3;j++)
			{
				cin>>a[i][j];
			}
		}
		for(i=0;i<=input-1;i++)
		{
			if((a[i][3]-a[i][2]==a[i][2]-a[i][1])&&(a[i][2]-a[i][1]==a[i][1]-a[i][0])) a[i][4]=a[i][3]+(a[i][3]-a[i][2]);
			if((a[i][3]/a[i][2]==a[i][2]/a[i][1])&&(a[i][2]/a[i][1]==a[i][1]/a[i][0])) a[i][4]=a[i][3]*(a[i][3]/a[i][2]);
		}
		
		for(i=0;i<=input-1;i++)
		{
			for(j=0;j<=4;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
    return 0;
}
