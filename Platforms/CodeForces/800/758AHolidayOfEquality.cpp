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

void Solve() {
    int n;
    cin >> n;

    vector<int> welfare(n);
    int max = INT_MIN, sum = 0;
    for(auto &it: welfare){
        cin >> it;
        if(max < it) max = it;
    }

    for(int w:welfare){
        if(w<max) sum += max-w;
    }  

    cout << sum << nl;    
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    Solve();
    
    return 0;
}