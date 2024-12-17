// In the name of Allah, the Most Gracious, the Most Merciful
#include <iostream>
using namespace std;

int main()
{
    long long n, m; // Use long long to handle large values
    cin >> n >> m;

    // Total number of tight dominoes
    long long totalDominoes = 2LL * (n * m) - n - m;

    // Output the result
    cout << totalDominoes << endl;

    return 0;
}
