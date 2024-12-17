// In the name of Allah, the Most Gracious, the Most Merciful
#include <iostream>
using namespace std;

int main()
{
    int n, cost = 0, defOne = 0, defZero = 0, res = 0;
    cin >> n;

    string a, b;
    cin >> a;
    cin >> b;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if (a[i] == '1')
            {
                defOne++;
            }
            else
            {
                defZero++;
            }
        }
    }

    res += min(defZero, defOne) * 2;

    res += (defOne > defZero ? defOne - defZero : defZero - defOne);

    cout << res << endl;

    return 0;
}