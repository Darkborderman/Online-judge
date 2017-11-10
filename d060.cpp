#include<iostream>
using namespace std;

int main()
{
	int input;
	while(cin>>input)
	{
		if(input<25)
		cout<<25-input<<endl;
		if(input==25)
		cout<<0<<endl;
		if(input>25)
		cout<<60-(input-25)<<endl;
	}
}
