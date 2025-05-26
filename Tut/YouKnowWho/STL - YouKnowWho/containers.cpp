// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Vector - Dynamic array
    cout << "Vector Examples:\n";
    vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(6); // Add element at end
    cout << "Vector size: " << vec.size() << "\n";
    cout << "First element: " << vec.front() << "\n";
    cout << "Last element: " << vec.back() << "\n\n";

    // 2. Set - Ordered unique elements
    cout << "Set Examples:\n";
    set<int> s;
    s.insert(3);
    s.insert(1);
    s.insert(4);
    s.insert(1); // Duplicate won't be added
    cout << "Set size: " << s.size() << "\n";
    for (int x : s)
        cout << x << " "; // Will print in sorted order
    cout << "\n\n";

    // 3. Map - Key-value pairs
    cout << "Map Examples:\n";
    map<string, int> mp;
    mp["apple"] = 1;
    mp["banana"] = 2;
    mp["orange"] = 3;
    cout << "Value of apple: " << mp["apple"] << "\n";
    for (auto &pair : mp)
    {
        cout << pair.first << ": " << pair.second << "\n";
    }
    cout << "\n";

    // 4. Queue - FIFO structure
    cout << "Queue Examples:\n";
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "Front of queue: " << q.front() << "\n";
    q.pop();
    cout << "New front after pop: " << q.front() << "\n\n";

    // 5. Stack - LIFO structure
    cout << "Stack Examples:\n";
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << "Top of stack: " << st.top() << "\n";
    st.pop();
    cout << "New top after pop: " << st.top() << "\n\n";

    // 6. Priority Queue (Max Heap by default)
    cout << "Priority Queue Examples:\n";
    priority_queue<int> pq;
    pq.push(3);
    pq.push(1);
    pq.push(4);
    cout << "Top (maximum) element: " << pq.top() << "\n";

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(3);
    min_pq.push(1);
    min_pq.push(4);
    cout << "Top (minimum) element: " << min_pq.top() << "\n\n";

    // 7. Deque - Double ended queue
    cout << "Deque Examples:\n";
    deque<int> dq = {1, 2, 3};
    dq.push_front(0);
    dq.push_back(4);
    cout << "First element: " << dq.front() << "\n";
    cout << "Last element: " << dq.back() << "\n";

    return 0;
}