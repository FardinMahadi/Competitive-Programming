// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, n, w, totalNeeded = 0;
    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++)
    {
        totalNeeded += k * i;
    }

    cout << (totalNeeded > n ? totalNeeded - n : 0) << endl;
}