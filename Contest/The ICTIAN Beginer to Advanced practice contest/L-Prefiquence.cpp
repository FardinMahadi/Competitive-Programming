#include <iostream>
#include <string>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, m;
        cin >> n >> m;

        string a, b;
        cin >> a;
        cin >> b;

        int i = 0;

        for (int j = 0; j < m; j++)
        {

            if (i < n && a[i] == b[j])
            {
                i++;
            }
            if (i == n)
                break;
        }

        cout << i << endl;
    }

    return 0;
}