// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

vector<int> round(int n)
{
    vector<int> roundNums;
    int multiplier = 1;

    while (n > 0)
    {
        int digit = n % 10;
        if (digit != 0)
        {
            roundNums.push_back(digit * multiplier);
        }
        n /= 10;
        multiplier *= 10;
    }

    return roundNums;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> result = round(n);
        cout << result.size() << endl;
        for (int r : result)
        {
            cout << r << " ";
        }
        cout << endl;
    }
}
