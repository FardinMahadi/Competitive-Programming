// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int oneTeamCount = 0, zeroTeamCount = 0;

    for (char c : str)
    {
        if (c == '1')
        {
            oneTeamCount++;
            zeroTeamCount = 0;
        }
        else
        {
            zeroTeamCount++;
            oneTeamCount = 0;
        }

        if (oneTeamCount == 7 || zeroTeamCount == 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
}