#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t; // Number of test cases
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        cout << n + m - 1 << endl;
    }
    return 0;
}
