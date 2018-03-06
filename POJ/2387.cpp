#include<iostream>
#include<vector>
using namespace std;
void Relax(int, int , int, vector<int>&);
int main()
{
	int T,N;
	cin>>N>>T;
	vector<int> trail[3],dist;
	for(int i=0;i<=N-1;i++)
	{
		int st,ed,cost;
		cin>>st>>ed>>cost;
		trail[0].push_back(st);
		trail[1].push_back(ed);
		trail[2].push_back(cost);
	}
	for(int i=1;i<T;i++) dist.push_back(1000000000);
	dist.push_back(0);

	for(int i=0;i<T-1;i++)
	{
		for(int j=0;j<=trail[0].size()-1;j++)
		Relax(trail[0][j]-1,trail[1][j]-1,trail[2][j],dist);
	}
	//for(int i=0;i<=dist.size()-1;i++) 
	cout<<dist[0]<<endl;
	return 0;
}
void Relax(int u,int v,int w,vector<int> &dist)
{
	if(dist[u]+w<dist[v]) dist[v]=dist[u]+w;
	else if(dist[v]+w<dist[u]) dist[u]=dist[v]+w;
}
