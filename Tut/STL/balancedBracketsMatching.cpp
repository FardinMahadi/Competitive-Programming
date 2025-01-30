// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string inp;
    cin >> inp;

    stack<char> op;
    stack<char> end;

    for (int i = 0; i < inp.length(); i++)
    {
        if (inp[i] == '(')
        {
            op.push(inp[i]);
        }
        if (inp[i] == ')')
        {
            end.push(inp[i]);
        }
    }

    if (op.size() == end.size())
    {
        cout << "Balanced" << endl;
    }
    else
    {
        cout << "Unbalanced" << endl;
    }
}