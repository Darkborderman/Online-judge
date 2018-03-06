#include<iostream>
using namespace std;

int main()
{
    int input1,input2,counter=0,i;
	while(cin>>input1>>input2)
	{
		for(i=input1;i<=input2;i++)
		{
			if(i%4==0&&i%100!=0||i%400==0) counter++;
		}
		cout<<counter<<endl;
		counter=0;
	}
}
