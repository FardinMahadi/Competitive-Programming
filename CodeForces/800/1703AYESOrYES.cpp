// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

#define test     \
    long long t; \
    cin >> t;    \
    while (t--)

#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'

int main()
{
    test
    {
        string str;
        cin >> str;

        for (char &c : str)
            c = toupper(c);

        if (str == "YES")
            yes;
        else
            no;
    }

    return 0;
}