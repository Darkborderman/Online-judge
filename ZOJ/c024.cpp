#include <iostream>

using namespace std;

int main(){

    long long int blocks,n;

    while ( cin >> n){

    	if(n<0) break;

        blocks = n * (n+1) /2 + 1;
        cout << blocks  << endl;
    }
    return 0;
}
