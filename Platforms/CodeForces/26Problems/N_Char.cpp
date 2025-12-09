#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (isalpha(ch))
    {
        if (isupper(ch))
        {
            cout << (char)tolower(ch) << endl;
        }
        else if (islower(ch))
        {
            cout << (char)toupper(ch) << endl;
        }
    }

    return 0;
}
