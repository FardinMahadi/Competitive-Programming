// In the name of Allah, the Most Gracious, the Most Merciful
// C: FardinMahadi

/*  ______  __      __  ______  ____
   / ____/ /  \    / / / |_) ) /   |
  / /___  / /\ \  / / / /--<  /_/| |
 / ____/ / /  \ \/ / / /_)  )   _| |_
/_/     /_/    \__/ /_/____/   |_____| */

#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
#define cinv(v)             for(auto &i : v) cin >> i
#define coutv(v)            for(auto &i : v) cout << i << sp
#define fixpoint(x)         cout << fixed << setprecision(x)
#define UNIQUE(X)           (X).erase(unique(all(X)),(X).end())
#define print(v)            for(auto x : v) cout << x << " "; cout << nl
#define SORT_UNIQUE(c)      (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))

const double PI = acos(-1);
const int N = 1e5 + 5;
int n, m;

void Solve(int tc) {
    int n, k; cin >> n >> k;

    vector<int> a(n);
    for (auto &it : a) cin >> it;

    int ans = 0;
    for (int i = 0; i <= n - k; ) {
        bool canHike = true;

        for (int j = 0; j < k; j++) {
            if (a[i + j] != 0) {
                canHike = false;
                break;
            }
        }

        if (canHike) {
            ans++;
            i += k + 1;
        } else i++;
    }

    cout << ans << nl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) Solve(tc);
    
    return 0;
}