#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
  int a,b,c;
  cin>>a>>b>>c;
  if(b*b-4*a*c<0) 
  {
    cout<<"No real root";
  }
  if(b*b-4*a*c==0)
  {
    cout<<"Two same roots x="<<((-1*b)-sqrt(b*b-4*a*c))/(2*a);
  }
  if(b*b-4*a*c>0)
  {
    cout<<"Two different roots x1="<<(-1*b+sqrt(b*b-4*a*c))/(2*a)<<" , x2="<<(-1*b-sqrt(b*b-4*a*c))/(2*a);
  }
  return 0;
}
