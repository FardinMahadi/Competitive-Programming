#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x, y;
    cin >> x >> y;

    cout << (x[x.length() - 1] - '0') + (y[y.length() - 1] - '0');

    return 0;
}
