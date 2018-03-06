#include<iostream>
using namespace std;

int main()
{
	double a,b,c,d,e,f,x,y;
	cin>>a>>b>>c>>d>>e>>f;
	if(a*e==d*b&&b*f==e*c)
	cout<<"Too many"<<endl;
	else if(a*e==d*b&&b*f!=e*c)
	cout<<"No answer"<<endl;
	else
	{
		x=(c*e-b*f)/(a*e-d*b);
		y=(d*c-a*f)/(b*d-a*e);
		printf("x=%.2lf\n",x);
		printf("y=%.2lf\n",y);
	}

}
