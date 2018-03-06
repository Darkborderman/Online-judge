#include<iostream>
using namespace std;

int main()
{
    int counter=0;
    int number;
    while(cin>>number)
    {
        if(number==0) break;
        int total=0;
        int distance=0;
        counter++;
        int box[number]={0};
        for(int i=0;i<=number-1;i++)
        {
            cin>>box[i];
            total=total+box[i];
        }
        total=total/number;
        for(int i=0;i<=number-1;i++)
        {
            box[i]-total>0 ? distance=distance+(box[i]-total) : distance+(box[i]-total);
        }
        cout<<"Set #"<<counter<<endl;
        cout<<"The minimum number of moves is "<<distance<<"."<<endl<<endl;
    }
    return 0;
}