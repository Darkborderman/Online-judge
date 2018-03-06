#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	while(cin>>a>>b>>c)
	{
		if(a>=b&&a>=c)
		{
			cout<<a<<endl;
			return 0;
		}
		if(b>=a&&b>=c)
		{
			cout<<b<<endl;
			return 0;
		}
		if(c>=a&&c>=b)
		{
			cout<<c<<endl;
			return 0;
		}
	}
}
