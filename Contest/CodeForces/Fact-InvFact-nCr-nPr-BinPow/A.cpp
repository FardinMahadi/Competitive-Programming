// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long int result = pow(2, n) - n - 1;

    cout << result << endl;
}