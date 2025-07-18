// In the name of Allah, the Most Gracious, the Most Merciful
// C: FardinMahadi

#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int ans[n];
    for (int i = 0; i < n; i++) 
        ans[a[i] - 1] = i + 1;

    for (int i = 0; i < n; i++) 
        cout << ans[i] << " ";

    return 0;
}
