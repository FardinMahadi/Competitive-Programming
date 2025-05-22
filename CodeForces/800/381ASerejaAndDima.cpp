// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sereja = 0, dima = 0;
    cin >> n;

    deque<int> arr;
    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
        {
            // sereja
            if (arr.front() > arr.back())
            {
                sereja += arr.front();
                arr.pop_front();
            }
            else
            {
                sereja += arr.back();
                arr.pop_back();
            }
        }
        else
        { // dima
            if (arr.front() > arr.back())
            {
                dima += arr.front();
                arr.pop_front();
            }
            else
            {
                dima += arr.back();
                arr.pop_back();
            }
        }
    }

    cout << sereja << " " << dima << endl;

    return 0;
}