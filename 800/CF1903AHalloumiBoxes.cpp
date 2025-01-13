// In the name of Allah, the Most Gracious, the Most Merciful
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canSortWithReversals(int n, int k, vector<int> &a)
{
    vector<int> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());

    for (int i = 0; i < n; ++i)
    {
        bool found = false;
        for (int j = max(0, i - k + 1); j <= min(n - 1, i + k - 1); ++j)
        {
            if (sorted_a[j] == a[i])
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        if (canSortWithReversals(n, k, a))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}