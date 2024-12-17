// In the name of Allah, the Most Gracious, the Most Merciful
#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int result = 0, n;
        cin >> n;
        for (int a = 1; a < n; a++)
        {
            for (int b = 1; b <= n; b++)
            {
                if (a == n - b)
                {
                    result++;
                }
            }
        }
        cout << result << endl;
    }

    return 0;
}