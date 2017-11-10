#include<iostream>
#include<vector>
using namespace std;

int main()
{
  bool reverse;
  vector<int> a;
  int num,input;
  while(cin>>num)
  {
    reverse=false;
    for(int i=0;i<=num-1;i++)
    {
      cin>>input;
      a.push_back(input);
    }
    while(a.size()!=0)
    {
      if(!reverse)
      {
        for(int i=0;i<=a.size()-1;i++)
        {
          cout<<a[i]<<" ";
        }
        a.erase(a.begin());
        cout<<endl;
        reverse=true;
      }
      else
      {
        for(int i=a.size()-1;i>=0;i--)
        {
          cout<<a[i]<<" ";
        }
        a.erase(a.end()-1);
        cout<<endl;
        reverse=false;
      }
    }
    cout<<endl;
  }
  return 0;
}
