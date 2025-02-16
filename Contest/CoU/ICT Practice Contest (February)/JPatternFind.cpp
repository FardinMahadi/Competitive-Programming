#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a, b;
        cin >> a >> b;

        vector<int> idx;

        int pos = 0;

        // main algo
        while ((pos = a.find(b, pos)) != string::npos)
        {
            idx.push_back(pos);
            pos++;
        }

        // printing the output
        if (idx.size() > 0)
        {
            cout << idx.size() << endl;
            for (int i = 0; i < idx.size(); i++)
            {
                cout << (idx[i] + 1) << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "Not Found" << endl;
        }
        cout << endl;
    }

    return 0;
}