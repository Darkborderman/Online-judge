#include<iostream>

using namespace std;

int main()
{
  unsigned long long int a[105];
  a[1]=1;
  a[2]=2;
  int x;
  for(int i=3;i<=100;i++) a[i]=a[i-1]+a[i-2];
  while(cin>>x) cout<<a[x]<<endl;
  return 0;
}
