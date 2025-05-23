// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

#define test     \
    long long t; \
    cin >> t;    \
    while (t--)

#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'

int main()
{
    test
    {
        string str;
        cin >> str;

        int left = (str[0] - '0') + (str[1] - '0') + (str[2] - '0');
        int right = (str[3] - '0') + (str[4] - '0') + (str[5] - '0');

        if (left == right)
            yes;
        else
            no;
    }

    return 0;
}