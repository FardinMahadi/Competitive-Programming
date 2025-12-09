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

using namespace __gnu_pbds;
using namespace std;

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
#define cinv(v)             for(auto &i : v) cin >> i
#define coutv(v)            for(auto &i : v) cout << i << sp
#define fixedpoint(x)       cout << fixed << setprecision(x)
#define UNIQUE(X)           (X).erase(unique(all(X)),(X).end())
#define print(v)            for(auto x : v) cout << x << " "; cout << nl
#define SORT_UNIQUE(c)      (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))

const double PI = acos(-1);
const int N = 1e5 + 5;
int n, m;

int orbVal(char orbName) {
    if (orbName == 's') return 0;
    else if (orbName == 'p') return 1;
    else if (orbName == 'd') return 2;
    else if (orbName == 'f') return 3;
    else return -1;
}

int charToInt(char num) {
    return num - '0';
}

void swap(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

void Solve(int tc) {
    int n;
    cin >> n;

    vector<string> orbs(n);
    for (int i = 0; i < n; i++)
        cin >> orbs[i];

    char arr[] = {'s', 'p', 'd', 'f'};

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            int orbVal1 = charToInt(orbs[j][0]) + orbVal(orbs[j][1]);
            int orbVal2 = charToInt(orbs[j + 1][0]) + orbVal(orbs[j + 1][1]);

            if (orbVal1 > orbVal2) swap(orbs[j], orbs[j+1]);
            else if (orbVal1 == orbVal2) {
                int qVal1 = charToInt(orbs[j][0]);
                int qVal2 = charToInt(orbs[j + 1][0]);

                if (qVal1 > qVal2) swap(orbs[j], orbs[j + 1]);
            }
        }
    }

    print(orbs);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) Solve(tc);
    
    return 0;
}