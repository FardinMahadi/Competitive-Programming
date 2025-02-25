// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

// simple method
// int gcd(int x, int y)
// {
//     int res = min(x, y);

//     while (res > 1)
//     {
//         if (x % res == 0 && y % res == 0)
//             break;
//         res--;
//     }
//     return res;
// }

// Euclidean Algorithm
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    if (a == b)
        return a;

    if (a > b)
        return gcd(a - b, b);

    return gcd(a, b - a);
}

int main()
{
    int x, y;
    cin >> x >> y;

    cout << gcd(x, y) << endl;

    cout << __gcd(x, y) << endl;
}