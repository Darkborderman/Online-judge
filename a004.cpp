#include<iostream>
using namespace std;
int main()
{
	int input;

	while(cin>>input)
	{
		if(input%4==0)
		{
			if(input%100==0&&input%400==0)
			{
				cout<<"閏年"<<endl;
			}
			if(input%100==0&&input%400!=0)
			{
				cout<<"平年"<<endl;
			}
			if(input%100!=0)
			{
				cout<<"閏年"<<endl;
			} 
		}
		else
		{
		cout<<"平年"<<endl;
		}
	}
	return 0;
}
