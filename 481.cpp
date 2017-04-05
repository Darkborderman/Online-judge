#include<iostream>
#include<vector>
using namespace std;
vector<int> index,lis,order;
vector<int>::iterator temp;
int LIS();

int main()
{
	int input,length;
	while(cin>>input) index.push_back(input);
	length=LIS();
	cout<<length<<"\n-\n";
	vector<int> temp;
	for(int i=order.size()-1;i>=0;i--)
	{
		if(length==order[i])
		{
			//cout<<index[i]<<endl;
			temp.push_back(index[i]);
			length--;
		}
	}
	for(int i=temp.size()-1;i>=0;i--) cout<<temp[i]<<"\n";
	//for(int i=0;i<=order.size()-1;i++) cout<<"\n"<<order[i];
}

int LIS()
{
	if (index.size() == 0) return 0;
    lis.push_back(index[0]);
    order.push_back(lis.size());
    for (int i = 1; i < index.size(); ++i)
    {
        int n = index[i];
        if (n > lis.back())
        {
        lis.push_back(n);
        temp=lower_bound(lis.begin(), lis.end(), n);
        }
        else 
        {
        	temp=lower_bound(lis.begin(), lis.end(), n);
        	*temp = n;

        }
        order.push_back(distance(lis.begin(),temp)+1);
    }
    return lis.size();
}
