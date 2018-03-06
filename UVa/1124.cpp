#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string name;
  while(getline (cin,name))
  {
    cout<<name<<endl;
  }
  return 0;
}