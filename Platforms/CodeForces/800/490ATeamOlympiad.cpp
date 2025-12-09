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
    int n;
    cin >> n;

    vector<int> pIdx, mIdx, peIdx;

    vector<int> t(n);
    for( int i=0; i<n; i++){
        int val;
        cin >> val;

        if( val==1 ) pIdx.pb(i);
        if( val==2 ) mIdx.pb(i);
        if( val==3 ) peIdx.pb(i);
    }

    size_t maxSize = min(pIdx.size(), min(mIdx.size(), peIdx.size()));
    cout << maxSize << nl;

    for(int i=0; i<maxSize; ++i)
        cout << pIdx[i]+1 << sp << mIdx[i]+1 << sp << peIdx[i]+1 << nl;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    Solve();
    
    return 0;
}

