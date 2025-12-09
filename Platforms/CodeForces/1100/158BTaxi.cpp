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

void Solve() {
    int n; cin >> n;

    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;

    vector<int> s(n);
    for (auto &it : s){
        cin >> it;
        if (it == 1) cnt1++;
        if (it == 2) cnt2++;
        if (it == 3) cnt3++;
        if (it == 4) cnt4++;
    }

    int res = cnt4;

    int match31 = min(cnt1, cnt3);
    res += cnt3; 
    cnt1 -= match31;


    res += cnt2 / 2;
    cnt2 %= 2;

    if (cnt2) {
        res++;
        cnt1 -= min(2, cnt1);
    }

    if (cnt1 > 0) {
        res += (cnt1 + 3) / 4;
    }

    cout << res << nl;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    Solve();
    
    return 0;
}