#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    unsigned long long int input,x1;
	while(cin>>input)
	{
		x1=(-1+sqrt(1+8*input))/2;
	}
	cout<<x1<<endl;
    return 0;
}
