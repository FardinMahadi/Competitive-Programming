// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        string w;
        cin >> w;

        w[w.size() - 2] = 'i';
        w.pop_back();
        cout << w << endl;
    }
}