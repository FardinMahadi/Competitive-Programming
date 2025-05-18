// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int min = a < b ? a : b;
    int remaining = (max(a, b) - min) / 2;

    cout << min << " " << remaining << endl;

    return 0;
}