#include<iostream>
using namespace std;

int main()
{
	long long int sum=1,input,number,i;
	while(cin>>number)
	{
		for(i=1;i<=number;i++)
		{
			cin>>input;
			if(input==0) sum=0;
			while(input>0)
			{
				sum=sum*(input%10);
				input=input/10;
			}
			cout<<sum<<endl;
			sum=1;
		}
	}
}
