// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    string str1, str2, result;
    cin >> str1 >> str2;

    if (str1.compare(str2) < 0)
    {
        result = str1;
    }
    else if (str1.compare(str2) > 0)
    {
        result = str2;
    }
    else
    {
        result = str1;
    }

    cout << result << endl;
}