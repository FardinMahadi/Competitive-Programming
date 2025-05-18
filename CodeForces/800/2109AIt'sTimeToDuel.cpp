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
        int n;
        cin >> n;
        int minLoss = 0;

        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];

            if (arr[i] == 0)
                minLoss++;
        }

        bool isLied = false;
        for (int i = 0; i < n - 1; ++i)
        {
            if (arr[i] == 0 && arr[i + 1] == 0)
            {
                isLied = true;
                break;
            }
        }

        if (minLoss > 0 && !isLied)
            no;
        else
            yes;
    }

    return 0;
}