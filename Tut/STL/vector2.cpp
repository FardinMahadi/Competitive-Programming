#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()

'\n' vs endl
    // key value
    int
    main()
{
    vector<int> a = {1, 4, 5, 2, 9};

    int mx = min_element(all(a)) - a.begin();
    cout << mx << endl;

    cout << *min_element(all(a));

    cout << is_sorted(all(a));
}