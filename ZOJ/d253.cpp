#include<iostream>
using namespace std;

int main()
{
	int method[10000] = {0};
	int cent[5] = {1, 5, 10, 25, 50};
    method[0] = 1;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j + cent[i] <= 7490; j++)
            method[j+cent[i]]=method[j]+method[j+cent[i]];
    }
    int n;
    while(cin>>n)	printf("%d\n", method[n]);
}
