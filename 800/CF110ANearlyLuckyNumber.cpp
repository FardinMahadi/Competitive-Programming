// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

bool isLucky(long long int num)
{
    int luckyCount = 0;
    while (num > 0)
    {
        if (num % 10 == 4 || num % 10 == 7)
        {
            luckyCount++;
        }
        num /= 10;
    }

    if (luckyCount == 4 || luckyCount == 7)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    long long int num;
    cin >> num;

    if (isLucky(num))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}