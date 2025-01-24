// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        if (i > 0)
        {
            cout << " I";
        }
        else
        {
            cout << "I";
        }

        if (i % 2 == 0)
        {
            cout << " hate";
        }
        else
        {
            cout << " love";
        }

        if (i < n - 1)
        {
            cout << " that";
        }
    }

    cout << " it";
}