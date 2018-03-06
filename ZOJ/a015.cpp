#include<iostream>
using namespace std;
int main()
{
	int input1,input2,a[100][100],i,j;
	while(cin>>input1>>input2)
	{
		for(i=0;i<=input1-1;i++)
		{
			for(j=0;j<=input2-1;j++)
			{
				cin>>a[i][j];
			}
		}
		
		for(j=0;j<=input2-1;j++)
		{
			for(i=0;i<=input1-1;i++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
    return 0;
}
