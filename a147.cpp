#include<iostream>
using namespace std;
int main()
{
	int input,i;
	while(cin>>input)
	{
		for(i=1;i<input;i++)
		if(i%7!=0)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
}
