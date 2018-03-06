#include<iostream>
using namespace std;
int main()
{
	int input,i;
	long int a,b,c;
	while(cin>>input)
	{
		for(i=0;i<=input-1;i++)
		{
			cin>>a>>b>>c;
				if(a==1) 
				{cout<<b+c<<endl;}
				if(a==2) 
				{cout<<b-c<<endl;}
				if(a==3) 
				{cout<<b*c<<endl;}
				if(a==4) 
				{cout<<b/c<<endl;}
		}
	}
}
