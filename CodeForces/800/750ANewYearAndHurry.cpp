// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int remaining = 240 - k;
    int solved = 0;

    for (int i = 1; i <= n; i++)
    {
        if (remaining >= 5 * i)
        {
            remaining -= 5 * i;
            solved++;
        }
        else
            break;
    }

    cout << solved << endl;

    return 0;
}
