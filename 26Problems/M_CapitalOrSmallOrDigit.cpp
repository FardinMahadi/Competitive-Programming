#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (isdigit(ch))
    {
        cout << "IS DIGIT" << endl;
    }

    if (isalpha(ch))
    {
        cout << "ALPHA" << endl;
        if (isupper(ch))
        {
            cout << "IS CAPITAL" << endl;
        }
        if (islower(ch))
        {
            cout << "IS SMALL" << endl;
        }
    }

    return 0;
}
