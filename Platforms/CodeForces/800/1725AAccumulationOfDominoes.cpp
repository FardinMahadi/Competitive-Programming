// In the name of Allah, the Most Gracious, the Most Merciful
#include <iostream>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;

    if (m == 1)
    {
        cout << n - 1 << endl;
    }
    else
    {
        cout << (1LL * n * m) - n << endl;
    }

    return 0;
}
