// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    string firstStr;
    cin >> firstStr;

    while (t--)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (firstStr[i] == 'B' && firstStr[i + 1] == 'G')
            {
                swap(firstStr[i], firstStr[i + 1]);
                i++;
            }
        }
    }

    cout << firstStr << endl;
    return 0;
}
