// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<tuple<int, int, char>> a;
    int b = 0;

    for (int i = 0; i < s.size(); i++)
    {
        a.push_back({b, -i, s[i]});
        s[i] == '(' ? b += 1 : b -= 1;
    }

    sort(a.begin(), a.end());

    for (const auto &p : a)
    {
        cout << get<2>(p);
    }

    cout << endl;

    return 0;
}