// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    string str, translated;
    cin >> str;
    cin >> translated;
    bool isTranslated = true;

    if (str.length() != translated.length())
    {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != translated[str.length() - i - 1])
        {
            isTranslated = false;
        }
    }

    if (isTranslated)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}