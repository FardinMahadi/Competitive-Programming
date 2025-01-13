// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
#include <stdbool.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        bool canBeCrafted = false;

        vector<pair<int, int>> a(n);

        // for first test case
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
        }

        // for 3rd test case
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].second;
        }

        if (canBeCrafted)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

// not completed