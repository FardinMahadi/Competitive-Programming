#include<bits/stdc++.h>     
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(false);

    function<void()> Test_Case = [&]() {
        int n, m; cin >> n >> m;
        vector<int> g[n + 1];
        for(int i = 0; i < m; i++) {
            int a, b; cin >> a >> b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        int par[n + 1] = {0}, vis[n + 1] = {0}, dep[n + 1] = {0};
        function<void(int, int, int)> dfs = [&](int u, int p, int d) {
            par[u] = p; vis[u] = 1; dep[u] = d;
            for(const int v : g[u]) {
                if(vis[v]) continue;
                dfs(v, u, d + 1);
            }
        };
        dfs(1, 0, 1);
        int mx = max_element(dep + 1, dep + n + 1) - dep;
        vector<int> ans;
        while(mx != 1) {
            ans.push_back(mx);
            mx = par[mx];
        }
        ans.push_back(1);
        reverse(ans.begin(), ans.end());
        cout << ans.size() << '\n';
        for(int i : ans) cout << i << ' ';
    };

    int32_t Case = 1;     // cin >> Case;
    for(int T = 1; T <= Case; T++) {
        Test_Case();
    }
    return 0;
}