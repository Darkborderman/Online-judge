#include<iostream>

using namespace std;
int flag[10000]={0};
int main()
{
	long long int Z,I,M,L,times=1;
	while((cin>>Z>>I>>M>>L)&&(Z&&I&&M&&L))
	{
		int counter=0;
		Z=Z%M; I=I%M; L=L%M;
		L=((L*Z)+I)%M;
		while(flag[L]==0)
		{
			flag[L]=1;
			L=((L*Z)+I)%M;
			counter++;
		}
		cout<<"Case "<<times<<": "<<counter<<endl;
		times++;
		for(int i=0;i<=9999;i++) flag[i]=0;
	}
	return 0;
}
