#include<iostream>
using namespace std;
int main()
{
    int input,counter;
    while(cin>>input)
    {
        counter++;
        if(input==-1) break;
        if(input==1) cout<<"Case "<<counter<<": "<<0<<endl;
        if(input==2) cout<<"Case "<<counter<<": "<<1<<endl;
        if(input>=3&&input<=4) cout<<"Case "<<counter<<": "<<2<<endl;
        if(input>=5&&input<=8) cout<<"Case "<<counter<<": "<<3<<endl;
        if(input>=9&&input<=16) cout<<"Case "<<counter<<": "<<4<<endl;
        if(input>=17&&input<=32) cout<<"Case "<<counter<<": "<<5<<endl;
        if(input>=33&&input<=64) cout<<"Case "<<counter<<": "<<6<<endl;
        if(input>=65&&input<=128) cout<<"Case "<<counter<<": "<<7<<endl;
        if(input>=129&&input<=256) cout<<"Case "<<counter<<": "<<8<<endl;
        if(input>=257&&input<=512) cout<<"Case "<<counter<<": "<<9<<endl;
        if(input>=513&&input<=1024) cout<<"Case "<<counter<<": "<<10<<endl;
        if(input>=1025&&input<=2048) cout<<"Case "<<counter<<": "<<11<<endl;
        if(input>=2049&&input<=4096) cout<<"Case "<<counter<<": "<<12<<endl;
        if(input>=4097&&input<=8192) cout<<"Case "<<counter<<": "<<13<<endl;
        if(input>=8193&&input<=16384) cout<<"Case "<<counter<<": "<<14<<endl;
    }
    return 0;
}
