// In the name of Allah, the Most Gracious, the Most Merciful
// C: FardinMahadi

#include <bits/stdc++.h>
using namespace std;

#define nl                  '\n'
#define F                   first
#define S                   second
#define ll                  long long
#define pb                  push_back
#define MOD                 1000000007
#define gcd(x,y)            __gcd(x,y)
#define lcm(x,y)            y*x/__gcd(x,y)
#define all(a)              (a.begin()),(a.end())
#define SUM(a)              accumulate(all(a),0LL);
#define ms(a,b)             memset(a, b, sizeof(a))
#define UNIQUE(X)           (X).erase(unique(all(X)),(X).end())
#define SORT_UNIQUE(c)      (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))

const double PI = acos(-1);

void Solve(int tc) {
    int n;
    cin >> n;

    int a[n], b[n];
    for(int i = 0; i<n; ++i)
        cin >> a[i];

    for(int i = 0; i<n; ++i)
        cin >> b[i];

    int res = 0;
    for(int i = 0; i<n-1; ++i){
        int gain = a[i] - b[i+1];
        if(gain>0) res += gain;
    }

    res += a[n-1];
    cout << res << nl;
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