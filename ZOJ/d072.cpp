#include<iostream>
using namespace std;

int main()
{
    int number,input,i;
	while(cin>>number)
	{
		for(i=1;i<=number;i++)
		{
			cin>>input;
			if(input%4==0&&input%100!=0||input%400==0)
			{
				cout<<"Case "<<i<<": a leap year"<<endl;
			}
			else
			{
				cout<<"Case "<<i<<": a normal year"<<endl;
			}
		}
	}
}
