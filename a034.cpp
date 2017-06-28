# include <iostream>
# include <string.h>

using namespace std ;

int main()
{
	char answer[1000]="";
  	int num=0,answerlen=0;
  	int quo=1;
  	while(cin>>num)
  	{	
    for(int k=0;k<answerlen;k++)	answer[k]=NULL;
	quo =1;
    for(int i=0;quo!=0;i++) 
	{
      quo=num/2;
      if(num%2==0)
        answer[i]='0';
      else if ( num % 2 == 1 )
    	answer[i]='1';
      else;       
      num=num/2;
  	}
    answerlen=strlen(answer);
    for(int j=answerlen-1;j!=-1;j--)
    cout<<answer[j];
    cout<<endl;
  }
  return 0 ;
}
