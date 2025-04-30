// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

#define test     \
    long long t; \
    cin >> t;    \
    while (t--)

int binToDec(string bin)
{
    int len = bin.length(), dec = 0;
    for (int i = 0; i < len; i++)
    {
        if (bin[len - i - 1] == '1')
        {
            dec += pow(2, i);
        }
    }
    return dec;
}

string decToBin(int dec, int len)
{
    string bin;
    while (dec > 0)
    {
        bin = (dec % 2 ? "1" : "0") + bin;
        dec /= 2;
    }

    while (bin.length() > len)
    {
        bin = bin.substr(1);
    }

    while (bin.length() < len)
    {
        bin = "0" + bin;
    }
    return bin;
}

int main()
{
    test
    {
        int n, m;
        cin >> n >> m;

        vector<int> nums(m);
        for (int i = 0; i < m; i++)
        {
            string bin;
            cin >> bin;
            nums[i] = binToDec(bin);
        }

        if (nums[0] != 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << "0" << endl;
            }
            cout << endl;
            continue;
        }

        for (int i = 0; i <= m; i++)
        {

            if (i != nums[i])
            {
                cout << decToBin(i, n) << endl;
                break;
            }
        }
    }

    return 0;
}