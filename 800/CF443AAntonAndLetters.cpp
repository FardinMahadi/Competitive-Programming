// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    set<char> uniqueChars;

    for (char c : s)
    {
        if (isalpha(c))
        {
            uniqueChars.insert(c);
        }
    }

    cout << uniqueChars.size() << endl;

    return 0;
}
