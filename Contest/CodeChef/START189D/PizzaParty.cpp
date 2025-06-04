// In the name of Allah, the Most Gracious, the Most Merciful
// C: FardinMahadi

/*
    ______  __      __  ______  ____
   / ____/ /  \    / / / |_) ) /   |
  / /___  / /\ \  / / / /--<  /_/| |
 / ____/ / /  \ \/ / / /_)  )   _| |_
/_/     /_/    \__/ /_/____/   |_____|
*/

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

void Solve() {
    int b, g;
    cin >> b >> g;
    b++;
    ll totalSlice = (b*4) + (g*3);
    cout << ceil((float)totalSlice/8) << nl;    
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    Solve();
    
    return 0;
}