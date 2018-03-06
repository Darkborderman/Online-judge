#include<iostream>

using namespace std;

int main()
{
	unsigned long long int input1,input2;
	while(cin>>input1>>input2&&input1&&input2)
	{
		if(input1>input2)
		{
			unsigned long long int temp=input2;
			input2=input1; input1=temp;
		}
		unsigned long long int result=input1*input2*(input1-1)+input1*input2*(input2-1);
		result=result+4*(2*(input1*(input1-1)*(input1-2)/6)+(input2-input1+1)*input1*(input1-1)/2);
		cout<<result<<endl;
	}
	return 0;
}
