#include<iostream>
#include<math.h>
int gcd(int,int);
using namespace std;

int main(){
    int a  , b;
    while(cin>>a>>b)
    {
        cout<<gcd(a,b)<<endl;
    }
    return 0;
}
int gcd(int a,int b)
{
	int output,i;
	for(i=1;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		{
			output=i;
		}
	}
	return output;
}
