// In the name of Allah, the Most Gracious, the Most Merciful
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    long long res = 2LL * (n * m) - n - m;

    cout << res << endl;

    return 0;
}