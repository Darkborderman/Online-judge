#include<iostream>
using namespace std;

int main()
{
    long long int input;
    while(cin>>input)
    {
    	if(input>=0&&input<=5)
    	{
    		cout<<"0"<<endl;
    	}
    	if(input>=6&&input<=11)
    	{
    		cout<<"590"<<endl;
    	}
    	if(input>=12&&input<=17)
    	{
    		cout<<"790"<<endl;
    	}
    	if(input>=18&&input<=59)
    	{
    		cout<<"890"<<endl;
    	}
    	if(input>=60)
    	{
    		cout<<"399"<<endl;
    	}
    }
}
