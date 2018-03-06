#include<iostream>

using namespace std;

int main()
{
	int input1,input2;
	while(cin>>input1>>input2)
	{
		cout<<input1<<" "<<input2<<" ";
		if(input1>=input2)
		{
			int temp=input2;
			input2=input1; input1=temp;
		}
		int maxium=0,i,record=0;
		for(i=input1;i<=input2;i++)
		{
			int n=i;
			while(n>1)
			{
				if(n%2) n=3*n+1;
				else n=n/2;
				record++;
			}
			if(record>=maxium) maxium=record;
			record=0;
		}
		cout<<maxium+1<<endl;
	}
}
