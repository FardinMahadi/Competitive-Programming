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
#define no                  cout << "NO\n"
#define yes                 cout << "YES\n"
#define all(a)              (a.begin()),(a.end())
#define SUM(a)              accumulate(all(a),0LL);
#define ms(a,b)             memset(a, b, sizeof(a))
#define UNIQUE(X)           (X).erase(unique(all(X)),(X).end())
#define print(v)            for(auto x : v) cout << x << sp; cout << nl
#define SORT_UNIQUE(c)      (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))

const double PI = acos(-1);

void Solve(int tc) {
    string p, s; cin >> p >> s;

    if( p[0]!=s[0] ){
        no;
        return;
    }

    int i = 0, j = 0;
    while( i<p.size() or j<s.size() ){
        if( i==p.size() or j==s.size() or p[0]!=s[0] ){
            no;
            return;
        }
        int str1 = i, str2 = j;
        while(i<p.size() and p[i]==p[str1])
            i++;
        while(j<s.size() and s[j]==s[str2])
            j++;
        if( j-str2<i-str1 or (i-str1)*2<j-str2){
            no;
            return;
        }
    }
    yes;
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