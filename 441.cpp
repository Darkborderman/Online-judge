#include<iostream>

using namespace std;
void backtrack(int,int);
int store[6];
int input;
int space[13];
bool flag[13]={0};
int main()
{
	int counter=0;
	while(cin>>input&&input)
	{
		if(!counter) counter++;
		else cout<<endl;
		for(int i=0;i<=input-1;i++)
		{
			cin>>space[i];
		}
		backtrack(0,0);
	}
	return 0;
}
void backtrack(int x,int cur)
{
	if(x>=6)
	{
		cout<<store[0]<<" "<<store[1]<<" "<<store[2]<<" "<<store[3]<<" "<<store[4]<<" "<<store[5]<<endl;
		return;
	}
	else	if(cur==input) return;
	else
	{
		for(int i=cur;i<=input-1;i++)
		{
			store[x]=space[i];
			backtrack(x+1,i+1);
		}
	}
}
