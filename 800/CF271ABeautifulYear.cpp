// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin >> year;

    while (true)
    {
        year++;
        string str = to_string(year);

        if ((str[0] != str[1]) && (str[0] != str[2]) && (str[0] != str[3]) && (str[1] != str[2]) && (str[1] != str[3]) && (str[2] != str[3]))
        {
            cout << year << endl;
            return 0;
        }
    }
}