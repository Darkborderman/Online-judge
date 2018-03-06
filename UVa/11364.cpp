#include<iostream>
using namespace std;

int main()
{
    int number;
    while(cin>>number)
    {
        for(int i=0;i<=number-1;i++)
        {
            int minium=101,maxium=-1;
            int posnum;
            cin>>posnum;
            for(int j=0;j<=posnum-1;j++)
            {
                int pos;
                cin>>pos;
                if(pos>maxium) maxium=pos;
                if(pos<minium) minium=pos;
            }
            cout<<2*(maxium-minium)<<endl;
        }
    }
    return 0;
}