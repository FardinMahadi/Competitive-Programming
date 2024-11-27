#include <iostream>
using namespace std;

int main()
{
    long int n;

    cin >> n;

    long int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    long int primaryDiagonal = 0;
    for (int i = 0; i < n; i++)
    {
        primaryDiagonal += matrix[i][i];
    }

    long int secondaryDiagonal = 0;
    for (int i = 0; i < n; i++)
    {
        secondaryDiagonal += matrix[i][n - i - 1];
    }

    cout << abs(primaryDiagonal - secondaryDiagonal) << endl;

    return 0;
}
