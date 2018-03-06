#include<iostream>
using namespace std;
int main()
{
	int input,i,score;
	while(cin>>input)
	{
		if(input>=0&&input<=10) score=6*input;
		if(input>=11&&input<=20) score=60+2*(input-10);
		if(input>=21&&input<=40) score=80+1*(input-20);
		if(input>=40) score=100;
		cout<<score<<endl;
	}
	return 0;
}
