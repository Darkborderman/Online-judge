#include<iostream>
using namespace std;

int main()
{
	long int f91;
	while(cin>>f91)
	{
		if(f91==0) break;
		if(f91<=100)
		{
			cout<<"f91("<<f91<<") = 91"<<endl;
		}
		if(f91>=101)
		{
			cout<<"f91("<<f91<<") = "<<f91-10<<endl;
		}
	}
}
