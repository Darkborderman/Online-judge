#include<iostream>
using namespace std;
int main()
{
	double input,output;
	while(cin>>input)
	{
		output=(input-32)*5/9;
		printf("%.3f",output);
	}
}
