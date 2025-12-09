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
    ll n, k;
    cin >> n >> k;

    int a[n], b[n];

    for ( int i = 0; i < n; ++i ) cin >> a[i];
    for ( int i = 0; i < n; ++i ) cin >> b[i];

    int x = -1;
    for( int i = 0; i < n; ++i ){
        if ( b[i] != -1 ) {
            if ( x == -1 ) x = a[i] + b[i];
            else {
                if ( x != a[i] + b[i] ) {
                    cout << 0 << nl;
                    return;
                }
            }
        }
    }
    
    if ( x == -1 ) {
        sort(a, a+n);
        int mx = a[n-1] - a[0];
        cout << k - mx + 1 << nl;
        return;
    }

    for ( int i = 0; i < n; ++i ) {
        if ( a[i] > x || x - a[i] > k ){
            cout << 0 << nl;
            return;
        }
    }

    cout << 1 << nl;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int t, T = 1;
    cin >> T;
    for(t = 1; t <= T; t++)
        Solve(t);
    
    return 0;
}