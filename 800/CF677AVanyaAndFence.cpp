// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    int n, h, totalW = 0;
    cin >> n >> h;
    vector<int> v_n(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v_n[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (v_n[i] > h)
        {
            totalW += 2;
        }
        else
        {
            totalW++;
        }
    }

    cout << totalW << endl;
}