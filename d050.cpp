#include<iostream>
using namespace std;
int main()
{
	int input,output;
	while(cin>>input)
	{
	output=(input+24-15)%24;
	cout<<output<<endl;
	}
	return 0;
}
