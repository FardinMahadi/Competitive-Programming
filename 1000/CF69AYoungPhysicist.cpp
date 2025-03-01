// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n;
    cin >> n;

    int v1 = 0, v2 = 0, v3 = 0;

    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;

        v1 += x;
        v2 += y;
        v3 += z;
    }

    if (v1 == 0 && v2 == 0 && v3 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}