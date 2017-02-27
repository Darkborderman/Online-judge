#include<iostream>
void wave(int,int);

using namespace std;

int line,ctr=0;
int main()
{
	int input1,input2;
	while(cin>>line)
	{
		int i;
		for(i=0;i<=line-1;i++)
		{
			cin>>input1>>input2;
			wave(input1,input2);
			ctr++;
		}
	}
}

void wave(int input1,int input2)
{
	int i,j,times;
	for(times=input2;times>=1;times--)
	{
		for(i=1;i<=input1;i++)
		{
			for(j=1;j<=i;j++)
			{
				cout<<i;
			}
			cout<<endl;
		}
		for(i=input1-1;i>=1;i--)
		{
			for(j=i;j>=1;j--)
			{
				cout<<i;
			}
			cout<<endl;
		}
		if(ctr==line-1&&times==1){}
		else cout<<endl;
	}
}
