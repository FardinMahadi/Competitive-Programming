// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    int n, changed = 0;
    cin >> n;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        int h, a;
        cin >> h >> a;

        v[i].first = h;
        v[i].second = a;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (v[i].first == v[j].second)
            {
                changed++;
            }
        }
    }

    cout << changed << endl;
}