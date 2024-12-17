#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    vector<int> animelsNumArr;

    for (int i = 0; i < tc; i++)
    {
        int legs;
        cin >> legs;

        if (legs % 2 != 0 || legs < 2)
        {
            animelsNumArr.push_back(-1);
        }
        else
        {
            int animals = floor(legs / 4) + (legs % 4) / 2;
            animelsNumArr.push_back(animals);
        }
    }

    for (int i = 0; i < animelsNumArr.size(); i++)
    {
        cout << animelsNumArr[i] << endl;
    }

    return 0;
}
