// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    unsigned long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            sum += (a[i] * -1);
        }
        else
        {
            sum += a[i];
        }
    }

    cout << sum << endl;
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