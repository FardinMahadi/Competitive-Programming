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

    vector<int> v(n);
    for(auto &it:v)
        cin >> it;

    sort(all(v));

    int i = 0, j = n-1;
    int cnt1=0, cnt2=0;

    while (i<n)
    {
        if((v[i]+v[n-1])%2)
            cnt1++;
        else
            break;
        i++;
    }

    while (j>=1)
    {
        if((v[0]+v[j])%2)
            cnt2++;
        else
            break;
        j--;
    }

    cout << min(cnt1, cnt2) << nl;
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