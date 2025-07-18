// In the name of Allah, the Most Gracious, the Most Merciful
// C: FardinMahadi

#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    int tc; cin >> tc;

    while (tc--) {
        string code1, code2;
        cin >> code1 >> code2;
        int cnt = 0;

        for (int i = 0; i < 10; i++)
            if (code1[i] != code2[i]) 
                cnt ++;    
        cout << cnt << " ";
    }
    
    return 0;
}