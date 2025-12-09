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

void Solve() {
    long long n, k;
    cin >> n >> k;

    vector<long long> smallDivs, largeDivs;

    for (long long i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            smallDivs.push_back(i);
            if (i != n / i) {
                largeDivs.push_back(n / i);
            }
        }
    }

    if (k <= smallDivs.size()) {
        cout << smallDivs[k - 1] << '\n';
    } else if (k <= smallDivs.size() + largeDivs.size()) {
        cout << largeDivs[largeDivs.size() - (k - smallDivs.size())] << '\n';
    } else {
        cout << -1 << '\n';
    }

}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    Solve();
    
    return 0;
}