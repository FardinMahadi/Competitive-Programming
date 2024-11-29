#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int m, n, maxDominoes;
    cin >> m >> n;

    maxDominoes = floor((m * n) / 2);

    cout << maxDominoes << endl;

    return 0;
}