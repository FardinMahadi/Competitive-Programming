// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> p[i];
    }

    vector<int> result(n);
    for (int giver = 0; giver < n; ++giver)
    {
        int receiver = p[giver] - 1;
        result[receiver] = giver + 1;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << result[i] << " ";
    }
}