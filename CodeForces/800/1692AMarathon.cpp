// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

#define test     \
    long long t; \
    cin >> t;    \
    while (t--)

int main()
{

    test
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        vector<int> v = {a, b, c, d};
        sort(v.begin(), v.end(), greater<int>());

        auto it = find(v.begin(), v.end(), a);

        cout << distance(v.begin(), it) << "\n";
    }

    return 0;
}