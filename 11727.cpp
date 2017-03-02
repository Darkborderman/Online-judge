#include<iostream>

using namespace std;

int main()
{
	int number;
	cin>>number;
	int counter=1,input1,input2,input3;
	for(int i=0;i<=number-1;i++)
	{
		cin>>input1>>input2>>input3;
		if(input1>input2 &&input1<input3) cout<<"Case "<<counter<<": "<<input1<<endl;
		if(input2>input1 &&input2<input3) cout<<"Case "<<counter<<": "<<input2<<endl;
		if(input3>input2 &&input3<input1) cout<<"Case "<<counter<<": "<<input3<<endl;
		if(input1>input3 &&input1<input2) cout<<"Case "<<counter<<": "<<input1<<endl;
		if(input2>input3 &&input2<input1) cout<<"Case "<<counter<<": "<<input2<<endl;
		if(input3>input1 &&input3<input2) cout<<"Case "<<counter<<": "<<input3<<endl;
		if(input1==input2||input2==input3) cout<<"Case "<<counter<<": "<<input2<<endl;
		counter++;
	}
	return 0;
}
