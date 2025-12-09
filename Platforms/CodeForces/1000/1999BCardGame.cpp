// In the name of Allah, the Most Gracious, the Most Merciful
// C: FardinMahadi

/*  ______  __      __  ______  ____
   / ____/ /  \    / / / |_) ) /   |
  / /___  / /\ \  / / / /--<  /_/| |
 / ____/ / /  \ \/ / / /_)  )   _| |_
/_/     /_/    \__/ /_/____/   |_____| */

#include <bits/stdc++.h>
using namespace std;

#define sp                  ' '
#define nl                  '\n'
#define F                   first
#define S                   second
#define ll                  long long
#define pb                  push_back
#define gcd(x,y)            __gcd(x,y)
#define lcm(x,y)            y*x/__gcd(x,y)
#define no                  cout << "NO" << nl
#define yes                 cout << "YES" << nl
#define all(a)              (a.begin()),(a.end())
#define SUM(a)              accumulate(all(a),0LL)
#define UNIQUE(X)           (X).erase(unique(all(X)),(X).end())
#define print(v)            for(auto x : v) cout << x << " "; cout << nl
#define SORT_UNIQUE(c)      (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))

const double PI = acos(-1);

int f(int x, int y) {
    if (x > y) return 1;
    if (x == y) return 0;
    return -1;
}

void Solve(int tc) {
    vector<int> a(2), b(2); cin >> a[0] >> a[1] >> b[0] >> b[1];
    int res = 0;

    if(f(a[0], b[0]) + f(a[1], b[1]) > 0) res++;
    if(f(a[0], b[1]) + f(a[1], b[0]) > 0) res++;
    if(f(a[1], b[0]) + f(a[0], b[1]) > 0) res++;
    if(f(a[1], b[1]) + f(a[0], b[0]) > 0) res++;

    cout << res << nl;
    

    
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) Solve(tc);
    
    return 0;
}