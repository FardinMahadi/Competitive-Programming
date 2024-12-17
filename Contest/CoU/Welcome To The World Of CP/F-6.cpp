#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, positive = 0, zero = 0, negative = 0;
    cin >> n;

    float arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0)
        {
            positive++;
        }
        else if (arr[i] == 0)
        {
            zero++;
        }
        else
        {
            negative++;
        }
    }

    cout << fixed << setprecision(6) << (positive * 1.0) / n << endl
         << fixed << setprecision(6) << (negative * 1.0) / n << endl
         << fixed << setprecision(6) << (zero * 1.0) / n << endl;

    return 0;
}