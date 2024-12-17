#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, spellCount = 0;
    vector<int> slimes;

    cin >> tc;

    for (int i = 0; i < tc; i++)
    {
        int value;
        cin >> value;
        slimes.push_back(value);
    }

    for (int i = 0; i < slimes.size(); i++)
    {
        if (slimes[i] == slimes[i + 1])
        {
            i++;
            spellCount++;
        }
    }

    cout << spellCount << endl;

    return 0;
}