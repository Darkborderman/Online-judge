#include<iostream>
#include<string.h>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
	char input[10],*token;
	int hour,minute;
	float angle1,angle2;
	int sum;
	while(cin>>input)
	{
		token=strtok(input,":");
		hour=atoi(token);
		token=strtok(NULL,":");
		minute=atoi(token);
		if(hour==0&&minute==0) return 0;
		angle1=0.5*minute+30*hour;
		if(angle1>=360) angle1=angle1-360;
		angle2=6*minute;
		if(angle2-angle1>=180) printf("%.3f\n",360-angle2+angle1);
		else if(angle2-angle1<0&&angle1-angle2>=180) printf("%.3f\n",360-angle1+angle2);
		else if(angle2-angle1<0&&angle2-angle2<180) printf("%.3f\n",angle1-angle2);
		else printf("%.3f\n",angle2-angle1);
	}
	return 0;
}
