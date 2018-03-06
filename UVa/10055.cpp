#include<iostream>
using namespace std;

int main()
{
    long long int our,enemy;
    while(cin>>our>>enemy)
    {
        cout<<((our-enemy>0) ? our-enemy : enemy-our)<<endl;
    }
    return 0;
}