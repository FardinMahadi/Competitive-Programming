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
#define UNIQUE(X)           (X).erase(unique(all(X)),(X).end())
#define print(v)            for(auto x : v) cout << x << " "; cout << nl
#define SORT_UNIQUE(c)      (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))

const double PI = acos(-1);
const int N = 100 + 10;
int n, m, a[N][N];

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    float mark;
    cin >> mark;

    if (mark > 100) {
        cout << "Invalid score" << nl;
        return 0;
    }
    if (mark >= 90){ 
        cout << "Excellent" << nl;
        return 0;
    }
    if (mark >= 75){ 
        cout << "Good" << nl;
        return 0;
    }
    if (mark >= 50){ 
        cout << "Average" << nl;
        return 0;
    }
    if (mark >= 0) { 
        cout << "Poor" << nl;
        return 0;
    }
    else {
        cout << "Invalid score" << nl;
    }
    
    return 0;
}