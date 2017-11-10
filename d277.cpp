#include<iostream>
using namespace std;
int main()
{
	long long int a;
	while(cin>>a)
	{
		if(a%2==0) cout<<a<<endl;
		if(a%2==1) cout<<a-1<<endl;
	}
	return 0;
}
