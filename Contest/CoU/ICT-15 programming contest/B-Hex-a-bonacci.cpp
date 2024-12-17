#include <iostream>
using namespace std;

const int MOD = 10000007;

int main()
{
    int cases;
    cin >> cases;

    for (int caseno = 1; caseno <= cases; ++caseno)
    {
        int a, b, c, d, e, f, n;
        cin >> a >> b >> c >> d >> e >> f >> n;

        if (n == 0)
        {
            cout << "Case " << caseno << ": " << a % MOD << endl;
            continue;
        }
        if (n == 1)
        {
            cout << "Case " << caseno << ": " << b % MOD << endl;
            continue;
        }
        if (n == 2)
        {
            cout << "Case " << caseno << ": " << c % MOD << endl;
            continue;
        }
        if (n == 3)
        {
            cout << "Case " << caseno << ": " << d % MOD << endl;
            continue;
        }
        if (n == 4)
        {
            cout << "Case " << caseno << ": " << e % MOD << endl;
            continue;
        }
        if (n == 5)
        {
            cout << "Case " << caseno << ": " << f % MOD << endl;
            continue;
        }

        int dp[n + 1];
        dp[0] = a % MOD;
        dp[1] = b % MOD;
        dp[2] = c % MOD;
        dp[3] = d % MOD;
        dp[4] = e % MOD;
        dp[5] = f % MOD;

        for (int i = 6; i <= n; ++i)
        {
            dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4] + dp[i - 5] + dp[i - 6]) % MOD;
        }

        cout << "Case " << caseno << ": " << dp[n] << endl;
    }

    return 0;
}
