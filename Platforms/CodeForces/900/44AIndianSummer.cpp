// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    set<string> leaf;
    for (int i = 0; i < n; i++)
    {
        string type, color;
        cin >> type >> color;
        leaf.insert(type + " " + color);
    }

    cout << leaf.size() << endl;

    return 0;
}