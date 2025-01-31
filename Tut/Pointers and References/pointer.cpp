// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 2;
    int *y;
    y = NULL;
    y = &x;
    cout << &x << endl
         << *y << endl;
}