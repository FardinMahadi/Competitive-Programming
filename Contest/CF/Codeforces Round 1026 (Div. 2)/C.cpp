#include<bits/stdc++.h>     
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(false);
    
    string s, t; cin >> s >> t;
    for(int i = 0; i < s.size(); i++) {
        int a = s[i] - '0', b = t[i] - '0';
        s[i] = '0' + (a ^ b);
    }
    cout << s << '\n';
    return 0;

}