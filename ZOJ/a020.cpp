#include<iostream>
#include<string>
using namespace std;
int main()
{
	string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int num[26] = {10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
	string a;
	int alpToNum = 0;
	int sum = 0;
	while (cin>>a)
	{
		for (int i = 0; i < 26; i++)
		{
			if (a[0] == alpha[i])
			{
				alpToNum = num[i];
			}
		}
		sum += (alpToNum % 10) * 9;
		sum += (alpToNum / 10);
		for (int i = 1; i < a.length() - 1; i++)
		{
			sum += ((9 - i)*((a[i] - 48)));
		}
		sum += (a[a.length() - 1] - 48);
		if (sum % 10 == 0)
		cout << "real" << endl;
		else
		cout << "fake" << endl;
		sum=0;
	}
	return 0;
}
