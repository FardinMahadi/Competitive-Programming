// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    string str;
    cin >> str;

    for (char c : str)
    {
        if (!(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U' || c == 'y' || c == 'Y'))
        {
            cout << "." << (char)tolower(c);
        }
    }
}