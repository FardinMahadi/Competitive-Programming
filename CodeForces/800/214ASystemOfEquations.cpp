// In the name of Allah, the Most Gracious, the Most Merciful
#include <iostream>
using namespace std;

int main()
{
    int n, m, count = 0;
    cin >> n >> m;

    for (int a = 0; a * a <= n; a++)
    {
        int b = n - a * a;

        if (b >= 0 && b * b + a == m)
        {
            {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}