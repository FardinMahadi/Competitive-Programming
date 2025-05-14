// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    string num1, num2;
    cin >> num1;
    cin >> num2;

    vector<char> res;

    for (int i = 0; i < num1.length(); i++)
    {
        if (num1[i] == num2[i])
        {
            res.push_back('0');
        }
        else
        {
            res.push_back('1');
        }
    }

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i];
    }

    cout << endl;
}