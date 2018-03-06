#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
int LIS(vector<int>,vector<int>);
int length;
int main()
{
	int times;
	while(scanf("%d",&times))
	{
		for(int i=0;i<=times-1;i++)
		{
			scanf("%d",&length);
			vector<int> index,lis;
			for(int j=0;j<=length-1;j++)
			{
				int input;
				scanf("%d",&input);
				index.push_back(input);
			}

			
			int a=LIS(index,lis);
			printf("%d\n",a);
		}
		return 0;
	}
}

int LIS(vector<int> index,vector<int> lis)
{
	if (index.size() == 0) return 0;
    lis.push_back(index[0]);
     
    for (int i = 1; i < index.size(); ++i)
    {
        int n = index[i];
        if (n > lis.back()) lis.push_back(n);
        else *lower_bound(lis.begin(), lis.end(), n) = n;
    } 
    return lis.size();
}
