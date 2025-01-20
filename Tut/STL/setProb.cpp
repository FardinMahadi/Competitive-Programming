// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    set<string> s;
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string str;
        cin >> str;
        s.insert(str);
    }

    for (auto value : s)
    {
        cout << value << endl;
    }
}