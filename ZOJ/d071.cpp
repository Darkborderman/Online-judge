#include<iostream>
using namespace std;

int main()
{
    int input;
	while(cin>>input)
	{
		if(input==0) break;
		if(input%4==0&&input%100!=0||input%400==0)
		{
			cout<<"a leap year"<<endl;
		}
		else
		{
			cout<<"a normal year"<<endl;
		}
	}
}
