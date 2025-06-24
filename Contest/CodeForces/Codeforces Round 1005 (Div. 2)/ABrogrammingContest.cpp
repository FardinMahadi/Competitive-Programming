// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, moves = 0;
    string s, t;
    cin >> n;
    cin >> s;

    int previous = '0';

    for (int i = 0; i < n; i++)
    {
        if (previous != s[i])
        {
            moves++;
            previous = s[i];
        }
    }

    cout << moves << endl;
}

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);

    int tc;
    cin >> tc;

    while (tc--)
    {
        solve();
    }
}