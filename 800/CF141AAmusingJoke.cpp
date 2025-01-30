// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    string guest, host, pileName;
    cin >> guest;
    cin >> host;
    cin >> pileName;

    map<char, int> freq_in;
    map<char, int> freq_demo;

    for (char c : guest)
        freq_in[c]++;

    for (char c : host)
        freq_in[c]++;

    for (char c : pileName)
        freq_demo[c]++;

    if (freq_in == freq_demo)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
