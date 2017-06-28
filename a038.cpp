#include<iostream>
using namespace std;
int main()
{
	long long int input;
	while (cin>>input)
	{
	if(input==0)	cout<<0;
	while((input%10==0)&&(input!=0))
	{
 		input=input/10;
 	}
 	while(input!=0)
	{
 		cout<<input%10;
 		input=input/10;
 	}
 	cout<<endl;
 	}
}
