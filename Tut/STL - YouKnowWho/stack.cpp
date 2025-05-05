// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> S;

    for (int i = 0; i < 5; ++i)
        S.push(i);

    cout << "Size: " << S.size() << endl
         << "Top: " << S.top() << endl;

    S.pop();
    S.pop();

    cout << "Size: " << S.size() << endl
         << "Top: " << S.top() << endl;

    if (S.empty())
        cout << "Stack is empty\n";
    else
        cout << "Stack is not empty" << endl;

    return 0;
}