#include<bits/stdc++.h>     //All prise is due to Allah alone, and peace and blessings be 
using namespace std;             //uppon him, after whom there is no prophet

const int mod = 1e9 + 7;

int pow_mod(int64_t n, int k, int m) {
    int64_t r = 1; n %= m;
    while(k) {
        if(k & 1) r = r * n % m;
        n = n * n % m;
        k >>= 1;
    }
    return r;
}
int sub(int64_t a, int b) {
    a -= b; if(a < 0) a += mod;
    return a;
}
int add(int64_t a, int b) {
    a += b; if(a >= mod) a -= mod;
    return a;
}
int mdd(int64_t a, int b) {
    return a * pow_mod(b, mod - 2, mod) % mod;
}
int mul(int64_t a, int b) {
    return a * b % mod;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(false);

    function<void()> Test_Case = [&]() {
        int n, m, k; cin >> n >> m >> k;
        
    };

    int32_t Case = 1;     //cin >> Case;
    for(int T = 1; T <= Case; T++) {
        Test_Case();
    }
    return 0;
}