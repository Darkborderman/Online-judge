#include<iostream>
using namespace std;

int main()
{
	double a,b,c,d,det;
	while(cin>>a>>b>>c>>d)
	{
		if((a==0)&&(b==0)&&(c==0)&&(d==0))	break;
		det=(a*d)-(b*c);
		if(det==0)  cout<<"cheat!"<<endl;
		else
		{
			printf("%.5f %.5f\n",d/det,-1*(b/det));
			printf("%.5f %.5f\n",-1*(c/det),a/det);
		}
	}
}
