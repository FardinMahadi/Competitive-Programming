#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<int> numbers(n);
    vector<int> even_indices;
    vector<int> odd_indices;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
        if (numbers[i] % 2 == 0)
        {
            even_indices.push_back(i + 1);
        }
        else
        {
            odd_indices.push_back(i + 1);
        }
    }

    if (even_indices.size() == 1)
    {
        cout << even_indices[0] << endl;
    }
    else
    {
        cout << odd_indices[0] << endl;
    }

    return 0;
}