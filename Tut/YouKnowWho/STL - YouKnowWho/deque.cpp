// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d = {1, 2, 3, 4, 5};
    cout << "Size: " << d.size() << endl
         << "Third element: " << d[2] << endl
         << "Front: " << d.front() << endl
         << "Back: " << d.back() << endl;

    for (deque<int>::iterator it = d.begin(); it != d.end(); ++it)
        cout << *it << "\t";
    cout << endl;

    for (deque<int>::reverse_iterator it = d.rbegin(); it != d.rend(); ++it)
        cout << *it << "\t";
    cout << endl;

    return 0;
}