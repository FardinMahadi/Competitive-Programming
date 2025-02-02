// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> b;

        vector<int> even_elements;
        for (int i = 1; i < n; i += 2)
        {
            even_elements.push_back(a[i]);
        }

        int min_cost = n + 1;
        for (int i = 0; i < even_elements.size(); i++)
        {
            if (even_elements[i] != i + 1)
            {
                min_cost = i + 1;
                break;
            }
        }

        cout << min_cost << endl;
    }
}