// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> rooms(n);
    for (int i = 0; i < n; ++i)
    {
        int p, q;
        cin >> p >> q;

        rooms[i] = {p, q};
    }

    int count = 0;

    for (pair<int, int> &room : rooms)
    {
        if (room.second - room.first >= 2)
        {
            count++;
        }
    }

    cout << count << endl;
}