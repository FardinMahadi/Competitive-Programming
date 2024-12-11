#include <iostream> // In the name of Allah, the Most Gracious, the Most Merciful
#include <vector>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        vector<int> result;
        int wheels;
        cin >> wheels;

        while (wheels--)
        {
            int x;
            cin >> x;
            result.push_back(x);
        }

        for (int i = 0; i < result.size(); i++)
        {
            int strLen;
            string strMove;
            cin >> strLen >> strMove;

            for (int j = 0; j < strLen; j++)
            {
                if (strMove[j] == 'D')
                {
                    result[i] = (result[i] + 1) % 10;
                }
                else
                {
                    result[i] = (result[i] - 1 + 10) % 10;
                }
            }
        }

        for (int num : result)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
