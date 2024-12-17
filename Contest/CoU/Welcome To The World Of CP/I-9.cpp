#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int candles[n], maxValue = 0, maxValueCount = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> candles[i];
        if (maxValue < candles[i])
        {
            maxValue = candles[i];
        }
    }

    for (int j = 0; j < n; j++)
    {
        if (maxValue == candles[j])
        {
            maxValueCount++;
        }
    }

    cout << maxValueCount << endl;

    return 0;
}