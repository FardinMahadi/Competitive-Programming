// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int candidate1 = a1 + a2;
        int candidate2 = a5 - a4;

        int max_fibonacciness = 0;
        for (int a3 : {candidate1, candidate2})
        {
            int count = 0;
            if (a3 == a1 + a2)
                count++; // i = 1 condition
            if (a4 == a2 + a3)
                count++; // i = 2 condition
            if (a5 == a3 + a4)
                count++; // i = 3 condition
            max_fibonacciness = max(max_fibonacciness, count);
        }

        cout << max_fibonacciness << endl;
    }
}