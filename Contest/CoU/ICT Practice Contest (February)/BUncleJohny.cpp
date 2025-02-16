#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
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
        int k, kValue;
        cin >> k;
        kValue = v_n[k - 1];

        sort(v_n.begin(), v_n.end());

        for (int i = 0; i < n; i++)
        {
            if (v_n[i] == kValue)
            {
                cout << i + 1 << endl;
            }
        }
    }

    return 0;
}