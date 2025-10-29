// In the name of Allah, the Most Gracious, the Most Merciful
// C: FardinMahadi

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int x = 10, y = 20;
    x ^= y;
    y ^= x;
    x ^= y;

    cout << x << " " << y << "\n";
    cout << MOD;
    
    return 0;
}