// In the name of Allah, the Most Gracious, the Most Merciful
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        string a;
        string b = "";
        cin >> a;

        for (int i = a.length() - 1; i >= 0; i--)
        {
            if (a[i] == 'p')
            {
                b.push_back('q');
            }
            else if (a[i] == 'q')
            {
                b.push_back('p');
            }
            else
            {
                b.push_back('w');
            }
        }

        cout << b << endl;
    }

    return 0;
}