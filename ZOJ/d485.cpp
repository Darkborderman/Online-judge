#include<iostream>
using namespace std;

int main()
{
	int a,b,count=0,i;
	while(cin>>a>>b)
	{
		cout<<((b-b%2)-(a+a%2))/2+1;
	}
	return 0;
}
