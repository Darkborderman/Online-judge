#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	long double p,q,r,s,t,u;
	while(cin>>p>>q>>r>>s>>t>>u)
	{
		long double sum,x=1;
		for(int i=1;i<=30;i++)
		{
			sum=p*exp(-1*x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u;
			//cout<<sum<<endl;
			if(sum>0) x=x+pow(2,-i);
			else if(sum<0) x=x-pow(2,-i);
		}
		long double temp1=p*exp(-1*1)+q*sin(1)+r*cos(1)+s*tan(1)+t*1+u;
		long double temp2=p*exp(-1*0)+q*sin(0)+r*cos(0)+s*tan(0)+t*0+u;
		if(temp1>0||temp2<0||temp1==temp2) printf("No solution\n");
		else printf("%.4Lf\n",x);
	}
}
