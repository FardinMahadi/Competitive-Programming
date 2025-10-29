// In the name of Allah, the Most Gracious, the Most Merciful
// C: FardinMahadi

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    cout << ((a +(b - (a % b))) / b) << endl;
    
    return 0;
}