#include<iostream>
#include<math.h>
int gcd(int, int);
using namespace std;

int main()
{
    int x1,y1,x2,y2;
    int a,b,c,d;

    while(cin>>x1>>y1>>x2>>y2)
    {

        int x = pow((double)(x2-x1),2);
        int y = y2 - y1;

        int gcdtemp=gcd((x),(y));
        x=x/gcdtemp;
        y=y/gcdtemp;
        
        a=x;  b=y;
		c=-2*y*x1;
		d=y*pow((double)x1,2)+y1*x;   
		cout<<a<<"y = "<<b<<"x^2 + "<<c<<"x + "<<d<<endl;
    }

}

int gcd(int m, int n) 
{ 

   if(n == 0) 
        return m; 
    else 
        return gcd(n, m % n);
}
