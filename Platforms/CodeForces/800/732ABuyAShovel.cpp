// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, r;
    long int totalShovals = 0;
    cin >> k >> r;

    while (true)
    {
        totalShovals++;
        if (((totalShovals * k) - r) % 10 == 0 || (totalShovals * k) % 10 == 0)
        {
            break;
        }
    }
    cout << totalShovals << endl;
}