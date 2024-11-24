#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (ch == 'z')
    {
        cout << 'a' << endl;
        return 0;
    }

    if (isalpha(ch))
    {
        ch++;
        cout << ch << endl;
    }

    return 0;
}