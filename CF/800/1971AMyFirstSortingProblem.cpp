#include <iostream> // In the name of Allah, the Most Gracious, the Most Merciful
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int arr[2];
        cin >> arr[0] >> arr[1];

        if (arr[0] == arr[1])
        {
            cout << arr[0] << " " << arr[1] << endl;
        }
        else if (arr[0] < arr[1])
        {
            cout << arr[0] << " " << arr[1] << endl;
        }
        else if (arr[0] > arr[1])
        {
            cout << arr[1] << " " << arr[0] << endl;
        }
    }

    return 0;
}