// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    int n, x, y;
    cin >> n;

    set<int> levelsSet;

    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int value;
        cin >> value;
        levelsSet.insert(value);
    }

    cin >> y;
    for (int i = 0; i < y; i++)
    {
        int value;
        cin >> value;
        levelsSet.insert(value);
    }

    if (levelsSet.size() == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
}