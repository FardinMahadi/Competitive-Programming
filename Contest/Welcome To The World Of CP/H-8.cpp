#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<long> arr(5);

    for (int i = 0; i < 5; i++)
    {

        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    long min = arr[0] + arr[1] + arr[2] + arr[3];
    long max = arr[1] + arr[2] + arr[3] + arr[4];

    cout << min << " " << max << endl;

    return 0;
}