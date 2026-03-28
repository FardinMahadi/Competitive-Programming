// In the name of Allah, the Most Gracious, the Most Merciful
// C: FardinMahadi

/* ______  __        __  ______  _____
   / ____/ /  \     / / / |_) ) /    _|
  / /___  / /\ \   / / / /--<  /_/| |
 / ____/ / /  \ \/ / / /_)  )   _| |_
/_/     /_/    \___/ /_/____/   |_____| */

#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;
using pii = pair<int, int>;
using ull = unsigned long long;

// PBDS: order_of_key(x) = # of elements < x
// PBDS: find_by_order(k) = iterator to k-th element (0-indexed)
template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using ordered_multiset = tree<pair<T,int>, null_type, less<pair<T,int>>, rb_tree_tag, tree_order_statistics_node_update>;

// RNG
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

#define Bismillah()         ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define Alhamdulillah       return 0;
#define sp                  ' '
#define nl                  '\n'
#define F                   first
#define S                   second
#define pb                  push_back
#define eb                  emplace_back
#define sz(x)               ((int)(x).size())
#define all(a)              (a.begin()),(a.end())
#define rall(a)             (a.rbegin()),(a.rend())

#define no                  cout << "NO" << nl
#define yes                 cout << "YES" << nl
#define FixedPoint(x)       fixed << setprecision(x)
#define SORT_UNIQUE(c)      (sort(all(c)), UNIQUE(c))
#define cinv(v)             for(auto &i : v) cin >> i
#define coutv(v)            for(auto &i : v) cout << i << sp
#define UNIQUE(X)           (X).erase(unique(all(X)), (X).end())

// Container Helpers
#define mem(a, b)           memset(a, b, sizeof(a))
#define Boro(vec)           *(max_element(all(vec)))
#define Chuto(vec)          *(min_element(all(vec)))
#define lowb(a, x)          (lower_bound(all(a), (x)) - (a).begin())
#define uppb(a, x)          (upper_bound(all(a), (x)) - (a).begin())

// Bitwise & Math
#define isOdd(n)            ((n) & 1)
#define countSetBits(x)     __builtin_popcountll(x)
inline bool isPowerOf2(ll x) { return (x > 0) && ((x & (x - 1)) == 0); }
inline ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
inline ll lcm(ll a, ll b) { if(a==0||b==0) return 0; return (a/gcd(a,b))*b; }

// Graph Moves (Commented for use when needed)
// const int dx[] = {+1,-1,+0,+0}; const int dy[] = {+0,+0,+1,-1}; // Rook
// const int dx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; const int dy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; // King
// const int dx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; const int dy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; // Knight

ll binExpo(ll x, ll n, ll m) {
    ll res = 1; x %= m;
    while (n > 0) {
        if (n & 1) res = (res * x) % m;
        x = (x * x) % m;
        n >>= 1;
     }
    return res;
}

// Debug (LOCAL)
#ifndef ONLINE_JUDGE
#define debug(...) cerr << "[" << #__VA_ARGS__ << "] = [", _print(__VA_ARGS__)
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '"' << x << '"'; }
void __print(const string &x) { cerr << '"' << x << '"'; }
template<typename T> void __print(const T &x) { cerr << x; }
template<typename A, typename B> void __print(const pair<A, B> &p) { cerr << '('; __print(p.first); cerr << ", "; __print(p.second); cerr << ')'; }
template<typename T> void __print(const vector<T> &v) { cerr << '['; for (int i = 0; i < sz(v); i++) { if (i) cerr << ", "; __print(v[i]); } cerr << ']'; }
void _print() { cerr << "]" << nl; }
template <typename T, typename... V> void _print(T t, V... v) { __print(t); if (sizeof...(v)) cerr << ", "; _print(v...); }
#else
#define debug(...)
#endif

// Constants
constexpr int N = 2e5 + 5;
constexpr int INF = 1e9 + 7;
constexpr int MOD = 1e9 + 7;
constexpr ll LINF = 1e18 + 7;
const double PI = 3.14159265358979323846;

void Solve() {
  int n; cin >> n;
  vector<int> nums;
  for (int i = 0; i < n - 1; i++) {
    int num; cin >> num;
    nums.push_back(num);
  }

  sort(all(nums));

  for (int i = 0; i < n - 1 ; i++) {
    if (n == 2 && nums[0] == 2) {
      cout << 1 << nl;
      break;
    }

    if (nums[i] + 1 != nums[i + 1]) {
      cout << (nums[i] + 1) << nl;
      break;
    }
  }
}

int main() {
    Bismillah();
    Solve();
    Alhamdulillah;
}
