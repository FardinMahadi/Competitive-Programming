// In the name of Allah, the Most Gracious, the Most Merciful
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int size = n * 2;
        vector<int> arr(size);

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        long long score = 0;
        for (int i = 0; i < size; i += 2)
        {
            score += arr[i];
        }

        cout << score << endl;
    }

    return 0;
}
