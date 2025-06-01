// In the name of Allah, the Most Gracious, the Most Merciful
// C: FardinMahadi

#include <bits/stdc++.h>
using namespace std;

#define sp                  ' '
#define nl                  '\n'
#define F                   first
#define S                   second
#define ll                  long long
#define pb                  push_back
#define MOD                 1000000007
#define gcd(x,y)            __gcd(x,y)
#define lcm(x,y)            y*x/__gcd(x,y)
#define no                  cout << "NO" << nl
#define yes                 cout << "YES" << nl
#define all(a)              (a.begin()),(a.end())
#define SUM(a)              accumulate(all(a),0LL);
#define ms(a,b)             memset(a, b, sizeof(a))
#define UNIQUE(X)           (X).erase(unique(all(X)),(X).end())
#define print(v)            for(auto x : v) cout << x << " "; cout << nl
#define SORT_UNIQUE(c)      (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))

const double PI = acos(-1);

void Solve(int tc) {
    int n;
    cin >> n;

    vector<int> strip(n);
    for (auto &it : strip) cin >> it;

    string s;
    cin >> s;

    vector<ll> a(n + 1, 0);
    for (int i = 0; i < n; ++i)
        a[i + 1] = a[i] + strip[i];

    int l = 0, r = n - 1;
    ll ans = 0;

    while (r > l) {
        while (l < n && s[l] == 'R') l++;
        while (r >= 0 && s[r] == 'L') r--;
        if (l < r) {
            ans += a[r + 1] - a[l];
            l++;
            r--;
        }
    }

    cout << ans << nl;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, T = 1;
    cin >> T;
    for (t = 1; t <= T; t++)
        Solve(t);

    return 0;
}
