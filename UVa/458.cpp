#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char input[1000];
	while(cin>>input)
	{
		int i;
		for(i=0;i<=strlen(input)-1;i++)
		{
			cout<<(char)(input[i]-7);
		}
		cout<<endl;
	}
	return 0;
}
