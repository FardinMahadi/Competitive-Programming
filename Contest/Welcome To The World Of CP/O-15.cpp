#include <iostream> // In the name of Allah, the Most Gracious, the Most Merciful
#include <iomanip>
using namespace std;

int main()
{
    int h1, m1, h2, m2;
    char colon;

    cin >> h1 >> colon >> m1;
    cin >> h2 >> colon >> m2;

    int startMinutes = h1 * 60 + m1;
    int endMinutes = h2 * 60 + m2;

    int midPointMinutes = startMinutes + (endMinutes - startMinutes) / 2;

    int h3 = midPointMinutes / 60;
    int m3 = midPointMinutes % 60;

    cout << setfill('0') << setw(2) << h3 << ":" << setfill('0') << setw(2) << m3 << endl;

    return 0;
}