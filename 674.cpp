#include<iostream>
using namespace std;
int space[7550]={0};
int main()
{
	space[0]=1;
	int coin[5]={50,25,10,5,1};
	int input;
	for(int i=0;i<=4;i++)
	{
		for(int j=coin[i];j<=7489;j++)
		{
			if(space[j-coin[i]]) space[j]=space[j]+space[j-coin[i]];
		}
	}
	while(cin>>input)
	{
		cout<<space[input]<<endl;
	}
}
