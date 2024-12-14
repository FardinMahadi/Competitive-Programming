// In the name of Allah, the Most Gracious, the Most Merciful
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arr[5][5], moves = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j])
            {
                moves = abs(i - 2) + abs(j - 2);
                break;
            }
        }
        if (moves)
            break;
    }

    cout << moves << endl;
    return 0;
}
