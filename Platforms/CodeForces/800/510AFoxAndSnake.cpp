// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "#";
            }
        }
        else
        {
            if (i % 4 == 0)
            {
                for (int j = 0; j < 1; j++)
                {
                    cout << "#";
                }
                for (int j = 1; j < m; j++)
                {
                    cout << ".";
                }
            }
            else
            {
                for (int j = 0; j < m - 1; j++)
                {
                    cout << ".";
                }
                for (int j = m - 1; j < m; j++)
                {
                    cout << "#";
                }
            }
        }

        cout << endl;
    }
}