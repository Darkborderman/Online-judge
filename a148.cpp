#include<iostream>
using namespace std;
int main()
{
int i=0,n=0,a[2000]={0};
double output=0;
while(cin>>n)
{
	output=0;
for(i=0;i<=n-1;i++)
{
 	cin>>a[i];
}
for(i=0;i<=n-1;i++) 
{
	output=output+a[i];
}
output=double(output/n);
n=0;
if(output<=59) cout<<"yes"<<endl;
if(output>59) cout<<"no"<<endl;
}
return 0;
}
