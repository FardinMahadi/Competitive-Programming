// In the name of Allah, the Most Gracious, the Most Merciful
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str, cf = "codeforces";
        cin >> str;
        int count = 0;

        for (int i = 0; i < 10; i++)
        {
            if (str[i] != cf[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}