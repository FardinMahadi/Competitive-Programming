// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int isLucky(int n)
{
    while (n > 0)
    {
        int digit = n % 10;
        if (digit != 4 && digit != 7)
            return false;
        num /= 10;
    }

    return true
}

int32_t main()
{
    int n;
    cin >> n;

    vector<int> luckyNumber;
    for (int i = 1; i <= stoi(n); i++)
    {
        if (isLucky(i))
        {
            luckyNumber.push_back(i);
        }
    }

    for (int lucky : luckyNumber)
    {
        if (n % lucky == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
}