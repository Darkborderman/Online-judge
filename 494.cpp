#include<iostream>
#include<string.h>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
	char input[1000],*token;
	int ctr=0;
	while(fgets(input,1000,stdin)!=0)
	{
		for(token=strtok(input," .!?");token!=NULL;token=strtok(NULL," .!?*1234567`890@#$%^&*_-=+()[];\"\\/"))
		{
			//puts(token);
			ctr++;
		}
		cout<<ctr-1<<endl;
		ctr=0;
	}
	return 0;
}
