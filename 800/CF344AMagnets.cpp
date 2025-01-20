// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    int n, count = 1, previousValue, presentValue;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;

        v[i] = value;
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            presentValue = v[i];
            continue;
        }
        if (presentValue != v[i])
        {
            count++;
        }
        presentValue = v[i];
    }
    cout << count << endl;
}