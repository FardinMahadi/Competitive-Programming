// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        // input
        string a, b;
        cin >> a >> b;

        vector<int> idx;

        // algo
        for (int i = 0; i < a.length(); i++)
        {
            if (a.find(b, i) == i)
            {
                idx.push_back(i);
                i += b.length() - 1;
            }
        }

        // output
        if (!idx.empty())
        {
            cout << idx.size() << endl;
            for (int i = 0; i < idx.size(); i++)
            {
                cout << idx[i] + 1 << " ";
            }
        }
        else
        {
            cout << "Not Found";
        }
        cout << endl
             << endl;
    }
}