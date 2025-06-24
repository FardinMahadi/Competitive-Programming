// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, m, b;
        cin >> n >> m;
        m = 1;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cin >> b;

        if (n == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        bool isSorted = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] < a[i])
            {
                isSorted = false;
            }
        }

        if (isSorted)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}