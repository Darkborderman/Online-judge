#include<iostream>
using namespace std;
int main()
{
	int input,output;
	while(cin>>input)
	{
		if(input%3==0) output=input/3;
		if(input%3!=0) output=input/3+1;
		cout<<output<<endl;
	}
}
