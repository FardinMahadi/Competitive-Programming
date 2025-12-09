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

long long calcLessThanX(vector<long long>& a, long long x) {
    long long n = a.size();
    long long s = 0;
    for (long long num : a) s += num;

    long long j = 0;
    long long ans = 0;

    for (long long i = n - 1; i >= 0; i--) {
        while (j < n && s - a[i] - a[j] >= x) {
            j++;
        }
        ans += (n - j);
    }

    for (long long i = 0; i < n; i++) 
        if (s - a[i] - a[i] < x) 
            ans--;

    return ans / 2;
}


void Solve(int tc) {
    long long n, x, y;
    cin >> n >> x >> y;

    vector<long long> a(n);
    for (auto &it : a) cin >> it;

    sort(a.begin(), a.end());

    long long result = calcLessThanX(a, y + 1) - calcLessThanX(a, x);
    cout << result << nl;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t, T = 1;
    cin >> T;
    for(t = 1; t <= T; t++)
        Solve(t);
    
    return 0;
}