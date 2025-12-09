// In the name of Allah, the Most Gracious, the Most Merciful
// C: FardinMahadi

/*  ______  __      __  ______  ____
   / ____/ /  \    / / / |_) ) /   |
  / /___  / /\ \  / / / /--<  /_/| |
 / ____/ / /  \ \/ / / /_)  )   _| |_
/_/     /_/    \__/ /_/____/   |_____|
*/

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
    string str;
    cin >> str;

    bool all_upper = true;
    for (char &c : str) {
        if (islower(c)) {
            all_upper = false;
            break;
        }
    }

    if (all_upper) {
        for (char &c : str) c = tolower(c);
    } 
    else if (islower(str[0])) {
        bool rest_upper = true;
        for (size_t i = 1; i < str.size(); ++i) {
            if (islower(str[i])) {
                rest_upper = false;
                break;
            }
        }

        if (rest_upper) {
            str[0] = toupper(str[0]);
            for (size_t i = 1; i < str.size(); ++i) {
                str[i] = tolower(str[i]);
            }

        }
    }
    
    cout << str << nl;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    Solve();
    
    return 0;
}