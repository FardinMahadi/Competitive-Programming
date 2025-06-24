// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
#include <stdbool.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    int t;
    cin >> t;

    while ((t--))
    {
        bool aliceWin = false;
        int n, a, b;
        cin >> n >> a >> b;

        if (a < b)
        {
            if ((b - a) % 2 == 0)
            {
                aliceWin = true;
            }
        }
        else if ((a > b))
        {
            if ((a - b) % 2 == 0)
            {
                aliceWin = true;
            }
        }

        if (aliceWin)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}