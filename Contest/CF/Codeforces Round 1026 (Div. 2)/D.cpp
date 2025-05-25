#include<bits/stdc++.h>     
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(false);
    

    int64_t ar[6][6];
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            cin >> ar[i][j];
        }
    }
    int64_t mx = 0;
    for(int i = 1; i < 5; i++) {
        for(int j = 1; j < 5; j++) {
            // cout << ar[i - 1][j - 1] + ar[i - 1][j] + ar[i - 1][j + 1] + ar[i][j] + ar[i + 1][j - 1] + ar[i + 1][j] + ar[i + 1][j + 1] << '\n';
            mx = max(mx, ar[i - 1][j - 1] + ar[i - 1][j] + ar[i - 1][j + 1] + ar[i][j] + ar[i + 1][j - 1] + ar[i + 1][j] + ar[i + 1][j + 1]);
        }
    }
    cout << mx << '\n';
    return 0;
}