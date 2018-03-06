#include<iostream>
using namespace std;
int main()
{
	long a,b,c;
	while(cin>>a>>b>>c)
  {
	   if(a>b+c || c>a && a>b && a+b>c || b>a && a>c && a+c>b)
	   cout<<"A"<<endl;
	   else if(b>a+c || c>b && b>a &&  b+a>c || a>b && b>c && b+c>a)
	   cout<<"B"<<endl;
	   else if(c>a+b || a>c && c>b && c+b>a || b>c && c>a && c+a>b)
	   cout<<"C"<<endl;
  }
}
