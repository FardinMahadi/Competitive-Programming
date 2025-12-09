#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define nl '\n'
#define pii pair<int, int>
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define rev(v) reverse(v.begin(), v.end())
#define uniq(v) v.erase(unique(v.begin(), v.end()), v.end())
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define int long long
#define tst    \
    int TT;    \
    cin >> TT; \
    for (int tc = 1; tc <= TT; tc++)

const double PI = acos(-1);
using namespace std;
bool cmp(const pair<int, int> &p1, const pair<int, int> &p2)
{
    if (p1.first < p2.first)
        return 1;
    else if (p1.first == p2.first)
        return (p1.second > p2.second);
    return 0;
}
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;

    vector<int> v(n);
    size_t sum = 0;

    for (auto &i : v)
    {
        cin >> i;
        sum += i;
    }

    size_t count = 0;

    if (sum >= x)
    {
        sum = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            sum += v[i];
            count++;
            if (sum >= x)
                break;
        }
        int result = ((n * k) - count) + 1;
        if (result < 0)
        {
            cout << 0 << nl;
            return;
        }
        cout << result << nl;
    }
    else
    {
        int d;
        if (x % sum == 0)
        {
            d = x / sum;
            d = n * d;
            int result = ((n * k) - d) + 1;
            if (result < 0)
            {
                cout << 0 << nl;
                return;
            }
            cout << result << nl;
        }
        else
        {
            d = x / sum;
            int l = d * n;
            d = sum * d;
            for (int i = n - 1; i >= 0; i--)
            {
                d += v[i];
                count++;
                if (d >= x)
                    break;
            }
            l = l + count;
            int result = ((n * k) - l) + 1;
            if (result < 0)
            {
                cout << 0 << nl;
                return;
            }

            cout << result << nl;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    tst
    {
        solve();
    }

    return 0;
}