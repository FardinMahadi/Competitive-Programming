#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long eyes, mouths, bodies;
    cin >> eyes >> mouths >> bodies;

    long long firstSet = min({eyes, mouths, bodies});

    eyes -= firstSet;
    mouths -= firstSet;
    bodies -= firstSet;

    long long secondSet = min(eyes / 2, bodies);

    long long katryoshkasCount = firstSet + secondSet;

    cout << katryoshkasCount << endl;
    return 0;
}
