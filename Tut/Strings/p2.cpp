// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    size_t pos = str.find('\\');

    cout << str.substr(0, pos) << endl;
}