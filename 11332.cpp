#include<iostream>

using namespace std;

int main()
{
	long long int input;
	while(cin>>input&&input!=0)
	{
		while(input>=10)
		{
			input=input%10+
			(input/10)%10+
			(input/100)%10+
			(input/1000)%10+
			(input/10000)%10+
			(input/100000)%10+
			(input/1000000)%10+
			(input/10000000)%10+
			(input/100000000)%10+
			(input/1000000000)%10+
			(input/10000000000)%10+
			(input/100000000000)%10+
			(input/1000000000000)%10;
		}
		cout<<input<<endl;
	}
	return 0;
}
