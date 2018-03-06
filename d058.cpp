#include<iostream>
using namespace std;
int main()
{
	int input;
	while(cin>>input)
	{
		if(input<0) cout<<"-1"<<endl;
		if(input==0) cout<<"0"<<endl;
		if(input>0) cout<<"1"<<endl;
	}
	return 0;
}
