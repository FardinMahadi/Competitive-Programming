// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    static map<char, int> list;

    for (auto s : str)
    {
        auto it = list.find(s);

        if (it != list.end())
        {
            it->second = it->second + 1;
        }
        else
        {
            list.insert({s, 1});
        }
    }

    for (auto it : list)
    {
        cout << it.first << " : " << it.second << endl;
    }

    return 0;
}