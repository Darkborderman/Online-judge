#include<iostream>
using namespace std;

int main()
{
	int slot[30000]={0},number,a;
	while(cin>>number)
	{
		for(int i=0;i<=number-1;i++)
		{
			cin>>a;
			slot[a]++;
		}
		int	maxium=0;
		for(int i=0;i<=29999;i++)
		{
			if(slot[i]>maxium)
			{
				maxium=slot[i];
			}
		}
		for(int i=0;i<=29999;i++)
		{
			if(maxium==slot[i])
			{
				cout<<i<<" "<<maxium<<endl;
			}
		}
	}
		return 0;

}
