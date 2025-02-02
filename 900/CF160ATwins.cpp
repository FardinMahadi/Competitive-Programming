// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v_n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        v_n.push_back(value);
    }

    if (v_n.size() == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    sort(v_n.begin(), v_n.end());

    for (int i = v_n.size() - 1; i >= 0; i--)
    {
        int minSum = 0, maxSum = 0, count = 0;
        for (int j = i; j < v_n.size(); j++)
        {
            minSum += v_n[j];
            count++;
        }
        for (int j = 0; j < i; j++)
        {
            maxSum += v_n[j];
        }

        if (minSum > maxSum)
        {
            cout << count << endl;
            break;
        }
    }
}