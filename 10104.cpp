#include<iostream>

using namespace std;
int exGCD(int a,int b,int &X, int &Y)
{
	if(b==0)
	{
		X=1;
		Y=0;
		return a;
	}
	else
	{
		int gcd=exGCD(b,a%b,X,Y);
		int tmp=X;
		X=Y;
		Y=tmp-(a/b)*Y;
		return gcd;
	}
}

int main()
{
	int a,b,X,Y;
	while(cin>>a>>b)
	{
		int gcd=exGCD(a,b,X,Y);
		cout<<X<<" "<<Y<<" "<<gcd<<endl;
	}
}
