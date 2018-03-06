#include<iostream>
using namespace std;

int main()
{
    int number;
    while(cin>>number)
    {
        int divx,divy;
        cin>>divx>>divy;
        for(int i=0;i<=number-1;i++)
        {
            int x,y;
            cin>>x>>y;
            int resultx=x-divx,resulty=y-divy;
            if(resultx==0||resulty==0) cout<<"divisa";
            else if(resultx<0&&resulty<0) cout<<"SO";
            else if(resultx<0&&resulty>0) cout<<"NO";
            else if(resultx>0&&resulty<0) cout<<"SE";
            else if(resultx>0&&resulty>0) cout<<"NE";
            cout<<endl;
        }
    }
    return 0;
}