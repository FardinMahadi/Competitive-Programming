// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    cout << boolalpha << q.empty() << endl;

    for (int i = 1; i <= 5; ++i)
        q.push(i);

    // 1, 2, 3, 4, 5
    cout << "Front: " << q.front() << endl
         << "Back: " << q.back() << endl
         << "Size: " << q.size() << endl;

    q.pop();
    q.pop();

    // 3, 4, 5
    cout << "Front: " << q.front() << endl
         << "Back: " << q.back() << endl
         << "Size: " << q.size() << endl;
    return 0;
}