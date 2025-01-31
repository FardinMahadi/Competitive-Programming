// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    string inp;
    cin >> inp;

    for (char c : inp)
    {
        if (c == 'H' || c == 'Q' || c == '9')
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
}