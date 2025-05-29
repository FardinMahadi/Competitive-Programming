// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    vector<int> v = {2, 3, 5, 5, 7, 7, 1};
    sort( v.begin(), v.end() ); // O(nlog(n))
    int Sz = unique( v.begin(), v.end() ) - v.begin(); // O(n)

    cout << Sz << endl;
    for (int i = 0; i<Sz; ++i) cout << v[i] << " ";
    cout << endl;

    cout << *max_element(v.begin(), v.end()) << " " << *min_element(v.begin(), v.end()) << endl;
    
    return 0;
}