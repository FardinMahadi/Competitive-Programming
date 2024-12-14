// In the name of Allah, the Most Gracious, the Most Merciful
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;

    long long stonesInLength = ceil((double)n / a);
    long long stonesInWidth = ceil((double)m / a);

    long long totalStone = stonesInLength * stonesInWidth;

    cout << totalStone << endl;

    return 0;
}