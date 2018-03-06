#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;

int main()
{
	int number;
	cin>>number;
	for(int i=0;i<=number-1;i++)
	{
		int sum1,sum2;
		char input[10];
		cin>>input;
		sum1=((int)(input[0])-65)*676+((int)(input[1])-65)*26+((int)(input[2])-65);
		sum2=((int)(input[4]-48)*1000)+((int)(input[5]-48)*100)+((int)(input[6]-48)*10)+((int)(input[7]-48));
		int total=sum1-sum2;
		if(total<=0) total=sum2-sum1;
		if(total<=100) cout<<"nice"<<endl;
		else cout<<"not nice"<<endl;
	}
	return 0;
}
