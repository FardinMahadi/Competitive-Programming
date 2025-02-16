#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    while (true)
    {
        int totalDeposits = 0;
        cin >> n >> m;

        // code terminator
        if (m == 0)
        {
            break;
        }

        vector<string> v(n);

        // taking input
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        // main algo
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (v[i][j] == '@' && ((v[i][j + 1] == '*' && v[i][j + 2] == '*') || (v[i][j - 1] == '*' && v[i][j - 2] == '*')))
                {
                    totalDeposits++;
                    j += 4;
                }
            }
        }

        // output
        cout << totalDeposits << endl;
    }
}