#include<iostream>
using namespace std;
int main()
{
	int a,i;
	while(cin>>a)
	{
		if(a%4==0)
		{
			if(a%100==0&&a%400==0)
			{
				cout<<"a leap year"<<endl;
			}
			if(a%100==0&&a%400!=0)
			{
				cout<<"a normal year"<<endl;
			}
			if(a%100!=0)
			{
				cout<<"a leap year"<<endl;
			}
		}
		if(a%4!=0)
		{
			cout<<"a normal year"<<endl;
		}
	}
	return 0;
}
