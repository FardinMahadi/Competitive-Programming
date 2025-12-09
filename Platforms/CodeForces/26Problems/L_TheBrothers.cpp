#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fPFirstName, fPSecondName, sPFirstName, sPSecondName;
    cin >> fPFirstName >> fPSecondName;
    cin >> sPFirstName >> sPSecondName;

    if (fPSecondName == sPSecondName)
    {
        cout << "ARE Brothers";
    }
    else
    {
        cout << "NOT";
    }

    return 0;
}