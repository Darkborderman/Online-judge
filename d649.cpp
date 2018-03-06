#include<iostream>
using namespace std;

int main()
{
	int input,i,j;
	while(cin>>input)
	{
		if(input==0) break;

		for(i=0;i<=input-1;i++)
		{
			for(j=input-i-2;j>=0;j--)
			{
				cout<<"_";
			}
			for(j=0;j<=i;j++)
			{
				cout<<"+";
			}
			cout<<endl;
		}
	}
	return 0;
}
