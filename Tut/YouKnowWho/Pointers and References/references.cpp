// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 2;  // -> [2]
    int &b = a; // --^
    int &c = b;
    a = 3;
    cout << a << endl
         << b << endl
         << c << endl
         << endl;

    int x = 2;
    bool y = true;
    cout << &x << endl
         << &y << endl;
}