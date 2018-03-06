#include <iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[1000];
	while(cin >> s)
	{
	int flag=0;
	int len=strlen(s);
	for (int i=0; i < len/2; i++)
	if (s[i]!=s[len-1-i])
	{
		flag++;
	}
	if(flag>0)
	cout<<"no"<<endl;
	else 
	cout<<"yes"<<endl;
	}
}
