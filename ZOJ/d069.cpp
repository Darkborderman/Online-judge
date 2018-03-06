#include<iostream>
using namespace std;

int main()
{
    int number,input,i;
	while(cin>>number)
	{
		for(i=0;i<=number-1;i++)
		{
			cin>>input;
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
}
