// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    set<int> arr;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.insert(num);
    }

    if (arr.size() < 2)
        cout << "NO" << endl;
    else
    {
        auto it = arr.begin();
        it++;
        cout << *it << endl;
    }

    return 0;
}