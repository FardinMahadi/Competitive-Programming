// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, q, r, s;
    cin >> p >> q >> r >> s;

    int abc = max({p, q, r, s});

    vector<int> arr;

    if (p == abc)
        arr = {q, r, s};
    else if (q == abc)
        arr = {p, r, s};
    else if (r == abc)
        arr = {p, q, s};
    else
        arr = {p, q, r};

    int ab = abc - arr[0];
    int bc = abc - arr[1];
    int ac = abc - arr[2];

    cout << ab << " " << bc << " " << ac << endl;

    return 0;
}