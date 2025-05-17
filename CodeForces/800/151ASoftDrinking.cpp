// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int limDrinks = (k * l) / nl;
    int limSlices = c * d;
    int limSalts = p / np;

    int res = min(limDrinks, min(limSlices, limSalts)) / n;

    cout << res << endl;

    return 0;
}