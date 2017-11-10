#include<iostream>
using namespace std;

int main()
{
	unsigned long long int a,b;
	while(cin>>a>>b)
	{
		if(a>b) cout<<a-b<<endl;
		if(a==b) cout<<"0"<<endl;
		if(a<b) cout<<b-a<<endl;
	}
	return 0;
}
