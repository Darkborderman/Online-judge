#include<iostream>
using namespace std;
int main()
{
	int number,input,i,output=0;
	while(cin>>number)
	{
		for(i=1;i<=number;i++)
		{
			cin>>input;
			if(input>=output)
			{
				output=input;
			}
		}
		cout<<output;
	}
}
