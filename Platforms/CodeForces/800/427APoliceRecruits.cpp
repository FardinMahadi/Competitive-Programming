// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int officerFree = 0, untreated = 0;

    for (int i = 0; i < n; ++i)
    {
        int inp;
        cin >> inp;

        if (inp == -1)
            if (officerFree > 0)
                officerFree--;
            else
                untreated++;

        if (inp > 0)
            officerFree += inp;
    }

    cout << untreated << endl;

    return 0;
}