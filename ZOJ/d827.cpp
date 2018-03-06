#include<iostream>
using namespace std;

int main()
{
	int a,output=0;
	while(cin>>a)
	{
		output=(a/12)*50+(a%12)*5;
		cout<<output;
	}
}
