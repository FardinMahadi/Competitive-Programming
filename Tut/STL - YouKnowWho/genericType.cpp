// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

// user-defined template function
template <typename T>
T area(T a, T b)
{
    return a * b;
}

int main()
{
    int x1 = area<int>(10, 5);
    double x2 = area<double>(10.5, 5);
    float x3 = area<float>(10.5, 5);
    cout << x1 << ", " << x2 << ", " << x3 << endl;

    return 0;
}