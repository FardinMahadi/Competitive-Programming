// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s)
{
    for (string value : s)
    {
        cout << value << endl;
    }
}

int main()
{
    unordered_set<string> s;
    s.insert("abc"); // o(1)
    s.insert("zsdf");
    s.insert("bcd");

    // auto it = s.find("abc"); // o(1)
    // if (it != s.end())
    // {
    //     s.erase(it);
    // }
    s.erase("bcd");

    print(s);
}
