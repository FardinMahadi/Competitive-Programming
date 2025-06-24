// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        string s;
        cin >> s;

        int minLength = s.length();

        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                minLength = 1;
                break;
            }
        }

        cout << minLength << endl;
    }
}