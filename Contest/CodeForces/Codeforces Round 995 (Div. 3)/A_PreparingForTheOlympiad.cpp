// In the name of Allah, the Most Gracious, the Most Merciful
#include <iostream>
#include <vector>
#include <algorithm>
using ll = long long;
using ull = unsigned long long;

using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < n; ++i)
            cin >> b[i];

        int m = 0, s = 0;

        for (int i = 0; i < n - 1; ++i)
        {
            m += a[i];
            s += b[i + 1];
        }

        cout << m - s << endl;
    }

    return 0;
}
