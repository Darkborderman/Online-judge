#include<iostream>
using namespace std;
int main()
{
	int m,d,s;
	cin>>m>>d;
	s=(m*26+d)%3;
	if(s==0) cout<<"普通";
	if(s==1) cout<<"吉";
	if(s==2) cout<<"大吉"; 
	return 0;
}
