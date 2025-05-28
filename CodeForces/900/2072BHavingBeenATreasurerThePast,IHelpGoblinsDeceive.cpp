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
    int n;
    cin >> n;
    string s;
    cin >> s;

    if( n<3 ) cout << 0 << nl;
    else {
        size_t upCnt = 0, downCnt = 0;
        for(char c:s){
            if(c=='-') upCnt++;
            else downCnt++;
        }


        ll int maxUp = upCnt/2;
        ll int maxDown = downCnt;

        cout << min(maxUp, maxDown)*3 << nl;
    }
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