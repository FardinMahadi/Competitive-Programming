#include <iostream> // In the name of Allah, the Most Gracious, the Most Merciful
using namespace std;

int main()
{
    int n, k, l, c, d, p;
    long int nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalLiquid = k * l;
    int totalLimeSlices = c * d;
    int totalSalt = p;

    int toastsFromLiquid = totalLiquid / (n * nl);
    int toastsFromSalt = totalSalt / (n * np);
    int toastsFromLime = totalLimeSlices / n;

    int maxToasts = min(toastsFromLiquid, min(toastsFromSalt, toastsFromLime));

    cout << maxToasts << endl;

    return 0;
}
