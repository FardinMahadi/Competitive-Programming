// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{
    map<int, string> m;
    m[1] = "abc"; // 0(log(n))
    m[5] = "cdc";
    m[3] = "acd";

    m.insert({4, "afg"});

    m[6] = "a";
    m[5] = "cde";

    auto it = m.find(7);
    m.erase(3); // o(log(n))
    // if (it == m.end())
    // {
    //     cout << "No value" << endl;
    // }
    // else
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    //     ;
    // }

    print(m);
}