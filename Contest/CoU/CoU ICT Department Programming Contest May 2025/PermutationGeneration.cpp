// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    if (n % 2 == 1)
    {
        cout << "impossible'";
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            cout << (i + 1) << " ";
        }
        else
        {
            cout << (i - 1) << " ";
        }
    }

    return 0;
}