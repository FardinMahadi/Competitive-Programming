// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    int s[4], similarShoeCount = 0;
    cin >> s[0] >> s[1] >> s[2] >> s[3];

    set<int> uniqueShoes(s, s + 4);
    int needToBuy = 4 - uniqueShoes.size();

    cout << needToBuy << endl;
}