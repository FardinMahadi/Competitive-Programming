#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long discountedPrice;
    long double discount, price;
    cin >> discount >> discountedPrice;
    price = discountedPrice / (1 - (discount / 100));

    cout << fixed << setprecision(2) << price << endl;

    return 0;
}