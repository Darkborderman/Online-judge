#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    bool quote = false, first = true;
    while (getline(cin, s))
    {
        for (int i = 0; i <= s.length() - 1; i++)
        {
            if (s[i] == '"')
            {
                if (quote) cout << "''";
                else cout << "``";
                quote = !quote;
            }
            else cout << s[i];
        }
        cout << endl;
    }
    return 0;
}