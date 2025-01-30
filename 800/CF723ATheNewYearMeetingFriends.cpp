// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    vector<int> v_x = {x1, x2, x3};
    sort(v_x.begin(), v_x.end());

    int result = abs(v_x[1] - v_x[0]) + abs(v_x[1] - v_x[2]);
    cout << result << endl;
}