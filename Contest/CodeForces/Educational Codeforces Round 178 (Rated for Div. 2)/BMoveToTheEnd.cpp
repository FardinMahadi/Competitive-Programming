// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

#define test     \
    long long t; \
    cin >> t;    \
    while (t--)

int main()
{
    test
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        auto it = max_element(arr.begin(), arr.end());
        int temp = *it;
        arr.erase(it);
        arr.push_back(temp);

        long long int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                sum += arr[n - j - 1];
            }
            cout << sum << " ";
            sum = 0;
        }
        cout << arr[n - 1] << endl;
    }
    return 0;
}