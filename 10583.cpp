#include<iostream>
int Find(int[] ,int);
void Union(int[] ,int, int);

using namespace std;

int main()
{
	int students,tracks,number=1;
	
	int input1,input2;
	
	int ctr=0;
	while(cin>>students>>tracks&&(students!=0)&&(tracks!=0))
	{
		int stu[students+1];
		for(int i=0;i<=students;i++)
		{
			stu[i]=i;
		}
		for(int i=0;i<=tracks-1;i++)
		{
			cin>>input1>>input2;
			Union(stu,stu[input1],stu[input2]);
		}
		for(int i=0;i<=students;i++)
		{
			if(stu[i]==i) ctr++;
		}
		cout<<"Case "<<number<<": "<<ctr-1<<endl;
		number++;
		ctr=0;
	}
	return 0;
}
int Find(int p[],int x)
{
	if(x==p[x]) return x;
	return p[x]=Find(p,p[x]);
}
void Union(int p[],int x,int y)
{
	int X=Find(p,x);
	int Y=Find(p,y);
	p[X]=Y;
}

