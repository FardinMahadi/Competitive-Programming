#include <iostream> // In the name of Allah, the Most Gracious, the Most Merciful
using namespace std;

int main()
{
    long int num;
    cin >> num;

    if (num == 0)
    {
        cout << "01" << endl;
    }
    else if (num == 1)
    {
        cout << "05" << endl;
    }
    else
    {
        cout << "25" << endl;
    }

    return 0;
}
