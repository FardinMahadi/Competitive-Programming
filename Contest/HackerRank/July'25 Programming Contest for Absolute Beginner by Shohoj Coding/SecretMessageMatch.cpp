// In the name of Allah, the Most Gracious, the Most Merciful
// C: FardinMahadi

#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    int tc; cin >> tc;

    while (tc--) {
        string a, b;
        int min = 0, max = 0;
        cin >> a >> b;
        int len = a.length();

        for (int i = 0; i < len; i++){
            if (a[i] != b[i] && (a[i] != '?' && b[i] != '?')) min++;
            if (a[i] != b[i] || a[i] == '?' || b[i] == '?') max++;
        }

        cout << min << " " << max << "\n";
    }
    
    return 0;
}