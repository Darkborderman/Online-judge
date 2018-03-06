#include <cstdio>
#include <vector>
#include<iostream>

using namespace std;

int main()
{
    int round=1,LIS[100000];
    while (1)
    {
        int num;
        vector<int> height;

        cin>>num;
        if(num==-1) return 0;
        height.push_back(num);

        while (cin>>num&& num != -1) height.push_back(num);

        int max=0;
        for (int i=height.size()-1;i>=0;i--)
        {
            LIS[i]=1;
            for (int j=height.size()-1;j>i;j--)
            {
                if (height[j]<height[i]&&LIS[i]< LIS[j]+1) LIS[i]=LIS[j]+1;
            }
            if (LIS[i]>max) max=LIS[i];
        }
        if (round!=1) cout<<"\n";
        cout<<"Test #"<<round++<<":\n";
        cout<<"  maximum possible interceptions: "<<max<<"\n";
    }
}
