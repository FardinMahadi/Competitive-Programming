// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    unordered_map<int, string> m;

    m[1] = "abc"; // 0(log(n))
    m[5] = "cdc";
    m[3] = "acd";
    m[6] = "a";
    m[5] = "cde";

    auto it = m.find(7); // o(1)
    if (it != m.end())
        m.erase(it); // log(1)
}