// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

void printVec(vector<int> &v)
{
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        // v.size() -> O(1)
        cout << v[i] << " ";
    }
    v.push_back(2);
    cout << endl;
}

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(3);
    v.pop_back();

    vector<int> v2 = v; // O(n)
    v2.push_back(5);
    printVec(v);
    printVec(v);
    printVec(v2);
}