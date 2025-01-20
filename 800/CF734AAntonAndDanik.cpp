// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    int n;
    string s;

    int antonPoint = 0, danikPoint = 0;

    cin >> n;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            antonPoint++;
        }
        else
        {
            danikPoint++;
        }
    }

    if (antonPoint > danikPoint)
    {
        cout << "Anton" << endl;
    }
    else if (antonPoint < danikPoint)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
}