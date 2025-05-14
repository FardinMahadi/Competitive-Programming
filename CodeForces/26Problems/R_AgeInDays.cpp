#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int days, year, month, remaindDays;
    cin >> days;

    year = floor(days / 365);
    month = floor((days % 365) / 30);
    remaindDays = (days % 365) % 30;

    cout << year << " years" << endl
         << month << " months" << endl
         << remaindDays << " days" << endl;

    return 0;
}