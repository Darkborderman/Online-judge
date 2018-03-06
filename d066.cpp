#include<iostream>
using namespace std;

int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		if((a*60+b)>=450&&(a*60+b)<1020)
		cout<<"At School"<<endl;
		else
		cout<<"Off School"<<endl;
	}
}
