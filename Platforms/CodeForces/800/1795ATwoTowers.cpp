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

bool isAdjecentSame(string str){
    size_t len = str.length();
    for( int i = 0; i<len-1; ++i){
        if( str[i]==str[i+1] )
            return true;
    }
    return false;
}

int32_t adjecentCnt(string str){
    size_t len = str.length(), adjCnt = 0;
    for( int i = 0; i<len-1; ++i ){
        if( str[i]==str[i+1] )
            adjCnt++;
    }
    return adjCnt;
}

void Solve(int tc){
    int n, m;
    cin >> n >> m;

    string t1, t2;
    cin >> t1 >> t2;

    reverse(all(t2));
    string comb1 = t1 + t2;

    if( adjecentCnt(comb1)<=1 ) yes;
    else no;

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