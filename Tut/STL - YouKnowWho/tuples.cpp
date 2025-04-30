// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    tuple<int, string> person(20, "Fardin");
    cout << get<0>(person) << " " << get<1>(person) << endl;
    get<1>(person) = "Mahadi";
    cout << get<0>(person) << " " << get<1>(person) << endl;

    tuple<int, char, bool, float> thing;
    // thing = make_tuple(23, 'H', true, 3.1416);
    cout << get<0>(thing) << " " << get<1>(thing) << " " << get<2>(thing) << " " << get<3>(thing) << endl;

    tuple<int, int> t1 = make_tuple(1, 2);
    tuple<int, int> t2 = make_tuple(3, 4);
    cout << get<0>(t1) << " " << get<1>(t1) << " " << get<0>(t2) << " " << get<1>(t2) << endl;
    t1.swap(t2);
    cout << get<0>(t1) << " " << get<1>(t1) << " " << get<0>(t2) << " " << get<1>(t2) << endl;

    // De-structuring
    tuple<int, int> t3 = make_tuple(1, 2);
    int x, y;

    tie(x, y) = t3;
    cout << x << " " << y << endl;

    return 0;
}