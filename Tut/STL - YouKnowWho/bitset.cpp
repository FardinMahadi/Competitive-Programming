// In the name of Allah, the Most Gracious, the Most Merciful
#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    bitset<5> bnum(18);

    bitset<5> bs1(18);
    bitset<5> bs2(5);

    // cout << bnum[2] << " " << bnum.test(4) << endl;

    cout << (bs1 & bs2) << endl;
    cout << (bs1 | bs2) << endl;
    cout << (bs1 ^ bs2) << endl;

    return 0;
}