#include<iostream>
using namespace std;
int main()
{
  int i;
  while(cin>>i)
  {
    if(i%2==1) cout<<"Odd"<<endl;
    if(i%2==0) cout<<"Even"<<endl;
  }
  return 0;
}
