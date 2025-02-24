// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, turn = 1;
    cin >> n >> m;

    while (n > 0 && m > 0)
    {
        n--;
        m--;
        turn++;
    }

    if (turn % 2 == 0)
    {
        cout << "Akshat" << endl;
    }
    else
    {
        cout << "Malvika" << endl;
    }
}