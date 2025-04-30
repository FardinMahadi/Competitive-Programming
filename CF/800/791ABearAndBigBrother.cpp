// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    int a, b, yearNeeded = 0;
    cin >> a >> b;

    while (a <= b)
    {
        a *= 3;
        b *= 2;
        yearNeeded++;
    }

    cout << yearNeeded << endl;
}