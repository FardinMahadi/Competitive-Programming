// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    int n, timeNeeded = 0, max, min;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int maxElement = *max_element(a.begin(), a.end());
    int minElement = *min_element(a.begin(), a.end());
    int maxIdx = -1, minIdx = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == maxElement)
        {
            timeNeeded += i;
            maxIdx = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == minElement)
        {
            timeNeeded += n - i - 1;
            minIdx = i;
            break;
        }
    }

    if (maxIdx > minIdx)
    {
        cout << timeNeeded - 1 << endl;
    }
    else
    {
        cout << timeNeeded << endl;
    }
}