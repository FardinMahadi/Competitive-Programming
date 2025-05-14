#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double arr[3] = {a, b, c};
    double sorteArr[3];

    // Copy elements from arr to sorteArr
    for (int i = 0; i < 3; i++)
    {
        sorteArr[i] = arr[i];
    }

    // Sort the sorteArr array
    sort(sorteArr, sorteArr + 3);

    // Print the sorted array
    for (int i = 0; i < 3; i++)
    {
        cout << sorteArr[i] << endl;
    }

    cout << endl;

    // Print the original input order
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
