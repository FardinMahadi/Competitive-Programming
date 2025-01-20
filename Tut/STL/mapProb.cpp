// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    map<string, int> m;

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        // m[s] = m[s] + 1;
        m[s]++;
    }

    for (auto pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

// Question
/*
Given N strings, print unique strings in lexicographical order with their frequency
N <= 10^5
|s| <= 100
 */