// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

void upperCaseOut(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = toupper(str[i]);
    }
    cout << str << endl;
}

void lowerCaseOut(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]);
    }
    cout << str << endl;
}

int main()
{
    string str;
    cin >> str;

    int uc = 0, lc = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (isupper(str[i]))
        {
            uc++;
        }
        else
        {
            lc++;
        }
    }

    if (uc > lc)
    {
        upperCaseOut(str);
    }
    else
    {
        lowerCaseOut(str);
    }
}