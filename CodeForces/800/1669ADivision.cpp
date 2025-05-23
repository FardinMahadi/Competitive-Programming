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
        int r;
        cin >> r;

        if (r >= 1900)
            cout << "Division 1" << "\n";
        else if (r >= 1600)
            cout << "Division 2" << "\n";
        else if (r >= 1400)
            cout << "Division 3" << "\n";
        else
            cout << "Division 4" << "\n";
    }

    return 0;
}