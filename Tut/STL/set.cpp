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
    set<string> s;
    s.insert("abc"); // log(n)
    s.insert("zsdf");
    s.insert("bcd");

    // auto it = s.find("abc"); // log(n)
    // if (it != s.end())
    // {
    //     s.erase(it);
    // }
    s.erase("bcd");

    print(s);
}