// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    int n;
    string str;
    cin >> n;
    cin >> str;
    set<char> strSet;

    for (int i = 0; i < n; i++)
    {
        strSet.insert(tolower(str[i]));
    }

    if (strSet.size() == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}