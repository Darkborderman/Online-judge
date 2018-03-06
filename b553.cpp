#include<iostream>
using namespace std;

int main()
{
	int n,counter=0;
	while(cin>>n)
	{
		while(n!=1)
		{
			if(n%2==0)
			{
				n=n/2;
				counter++;
			}
			if(n%2==1&&n!=1)
			{
				n=n*3+1;
				counter++;
			}
		}
		cout<<counter<<endl;
		counter=0;
	}
}
