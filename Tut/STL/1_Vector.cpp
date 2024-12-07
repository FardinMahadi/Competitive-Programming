#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ar[1000];
    vector<int> v;
    v.push_back(1); // v[0]
    v.push_back(2); // v[1]
    v.push_back(3); // v[2]
    v.push_back(4); // v[3]

    // normal output
    // prints a garbag value if there were no value
    cout << v[0] << " ";
    cout << v[1] << endl;

    // special output
    // prints warning if there were no value
    cout << v.at(0) << " ";
    cout << v.at(1) << endl;

    // prints the size of the vector
    cout << v.size() << endl;

    // prints the first value
    cout << v.front() << endl;

    // prints the last value
    cout << v.back() << endl;

    // to empty the vector
    // v.clear();

    // to know whether the vector is empty or not

    if (v.empty())
        cout << "Empty" << endl;
    else
        cout << "Not Empty" << endl;

    // to delete last value
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // to dlt any value using index
    v.erase(v.begin());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}