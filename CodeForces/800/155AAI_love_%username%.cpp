// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, amazingCount = 0;
    cin >> n;

    int max, min;

    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;

        if (i == 0)
        {
            max = num;
            min = num;
        }
        if (max < num)
        {
            amazingCount++;
            max = num;
        }

        if (min > num)
        {
            amazingCount++;
            min = num;
        }
    }
    cout << amazingCount << endl;

    return 0;
}