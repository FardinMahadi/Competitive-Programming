// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
    int n, totalFaces = 0;
    cin >> n;

    vector<string> polyhedrons(n);

    for (int i = 0; i < n; i++)
    {
        cin >> polyhedrons[i];
    }

    for (string p : polyhedrons)
    {
        if (p == "Tetrahedron")
        {
            totalFaces += 4;
        }
        if (p == "Cube")
        {
            totalFaces += 6;
        }
        if (p == "Octahedron")
        {
            totalFaces += 8;
        }
        if (p == "Dodecahedron")
        {
            totalFaces += 12;
        }
        if (p == "Icosahedron")
        {
            totalFaces += 20;
        }
    }

    cout << totalFaces << endl;
}