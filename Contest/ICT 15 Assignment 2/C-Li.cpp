#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (isalpha(ch))
    {
        ch++;
        cout << ch << endl;
    }

    return 0;
}