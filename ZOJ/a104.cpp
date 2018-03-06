#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int values[1000];

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main ()
{
    int n;
    while(cin>>n)
  {
    for(int i=0;i<=n-1;i++)
    {
        cin>>values[i];
    }
    qsort (values,n,sizeof(int),compare);
    for(int i=0;i<=n-1;i++)
    {
        printf ("%d ",values[i]);
    }
    cout<<endl;
  }
    return 0;

}
