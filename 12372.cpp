#include<iostream>
using namespace std;

int main()
{
    int number,counter=1;
    while(cin>>number)
    {
        for(int i=0;i<=number-1;i++)
        {
            int width,length,height;
            cin>>width>>length>>height;
            if(width<=20&&length<=20&&height<=20) cout<<"Case "<<counter<<": good"<<endl;
            else cout<<"Case "<<counter<<": bad"<<endl;
            counter++;
        }
    }
    return 0;
}