// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    int n, result = 0;
    cin >> n;
    string s;

    cin >> s;

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            result++;
        }
    }

    cout << result << endl;

    return 0;
}
