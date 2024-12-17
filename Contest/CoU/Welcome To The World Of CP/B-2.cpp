#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arrLen;
    long long sum = 0;

    cin >> arrLen;

    vector<int> arr(arrLen);

    for (int i = 0; i < arrLen; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << sum << endl;

    return 0;
}