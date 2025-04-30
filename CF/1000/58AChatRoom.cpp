// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    string str, newStr;
    cin >> str;

    string toMatch = "hello";
    int matchIdx = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == toMatch[matchIdx])
        {
            newStr.push_back(str[i]);
            matchIdx++;

            if (matchIdx == toMatch.length())
                break;
        }
    }

    if (newStr == toMatch)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}