// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool isHard = false;

    while (n--)
    {
        int value;
        cin >> value;

        if (value == 1)
        {
            isHard = true;
        }
    }

    if (isHard)
    {
        cout << "HARD" << endl;
    }
    else
    {
        cout << "EASY" << endl;
    }
}