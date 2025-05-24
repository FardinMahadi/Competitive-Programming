// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

// ===== TYPES =====
#define ll long long
#define ld long double
#define pii pair<int, int>
#define pll pair<ll, ll>

// ===== CONTAINERS =====
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pii>
#define vll vector<pll>

// ===== SHORTCUTS =====
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

// ===== ALGORITHMS =====
#define srt(v) sort(all(v))
#define rsrt(v) sort((v).rbegin(), (v).rend())
#define rev(v) reverse(all(v))
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define min3(a, b, c) min(min(a, b), c)
#define max3(a, b, c) max(max(a, b), c)
#define min4(a, b, c, d) min(min(a, b), min(c, d))
#define max4(a, b, c, d) max(max(a, b), max(c, d))

// ===== LOOPS =====
#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define ROF(i, a, b) for (int i = (a); i >= (b); --i)
#define REP(i, n) for (int i = 0; i < (n); ++i)

// ===== IO + UTILS =====
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define nl '\n'
#define sp ' '
#define mem(a, b) memset(a, b, sizeof(a))
#define tst    \
    int TT;    \
    cin >> TT; \
    for (int tc = 1; tc <= TT; tc++)

// ===== MATH HELPERS =====
#define gcd(a, b) __gcd(a, b)

// ===== CONSTANTS =====
constexpr double PI = acos(-1);
constexpr ll MOD = 1e9 + 7;
constexpr ll INF = 1e18;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (auto &it : arr)
    {
        cin >> it;
    }
    srt(arr);

    size_t min = INT_MAX;

    if (n == 1)
    {
        if (arr[0] % 2 == 0)
            cout << 0 << nl;
        else
            cout << 1 << nl;
        return;
    }

    if ((arr[0] + arr[n - 1]) % 2 == 0)
    {
        cout << 0 << nl;
        return;
    }
    else
    {
        if (arr[0] % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 == 1)
                    min = i;
                break;
            }
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                if (arr[i] % 2 == 0)
                    if (min > n - 1 - i)
                        min = n - 1 - i;
                break;
            }
        }
    }
    cout << min << nl;
}

int main()
{

    tst
    {
        solve();
    }

    return 0;
}