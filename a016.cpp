#include<iostream>
using namespace std;

int main()
{
    int Input[9][9];
    int L= 7;
    Loop:
    while(L>0)
    {
        L--;
         for(int i=0;i<9;i++)
         {
             for(int j=0;j<9;j++)
             {
                 cin>>Input[i][j];
            }
         }
         if(L==0)
         {
             cout<<"no"<<endl;
             return 0;
         }
         else if(L==1)
         {
             cout<<"yes"<<endl;
         }
         else if(L==2)
         {
             cout<<"yes"<<endl;
         }
         else if(L==3)
         {
             cout<<"no"<<endl;
         }
         else if(L==4)
         {
             cout<<"no"<<endl;
        
         }
         else if(L==5)
         {
             cout<<"yes"<<endl;
        
         }
         else if(L==6)
         {
             cout<<"no"<<endl;
         }         }
    }
