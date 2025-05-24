// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    while (str.length() > 0)
    {
        if (str[0] == '.')
        {
            cout << 0;
            str.erase(0, 1);
        }
        else if (str[0] == '-' && str[1] == '.')
        {
            cout << 1;
            str.erase(0, 2);
        }
        else if (str[0] == '-' && str[1] == '-')
        {
            cout << 2;
            str.erase(0, 2);
        }
    }
    cout << "\n";

    return 0;
}