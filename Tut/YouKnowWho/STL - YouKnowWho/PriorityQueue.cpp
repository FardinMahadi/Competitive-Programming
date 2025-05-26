// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.push(30);
    pq.push(10);
    pq.push(20);

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    cout << "\n";

    priority_queue<int, vector<int>, greater<int>> pqMinHeap;

    pqMinHeap.push(30);
    pqMinHeap.push(10);
    pqMinHeap.push(20);

    while (!pqMinHeap.empty())
    {
        cout << pqMinHeap.top() << " ";
        pqMinHeap.pop();
    }

    cout << endl;

    auto cmp = [](int a, int b)
    { return a > b; };

    priority_queue<int, vector<int>, decltype(cmp)> q(cmp);

    vector<int> v = {8, 1, 6, 4, 0, 7, 2, 9};
    for (int x : v)
        q.push(x);

    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }

    cout << endl;

    return 0;
}