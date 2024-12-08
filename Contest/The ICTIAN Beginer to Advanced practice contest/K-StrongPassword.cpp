#include <iostream>
#include <string>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        string password;
        cin >> password;

        for (int i = 0; i < password.size() - 1; i++)
        {
            if (password[i] != password[i + 1])
            {
                password.insert(password.begin() + i + 1, (password[i] == 'z' ? 'a' : password[i] + 1));
                i++;
            }
        }

        cout << password << endl;
    }

    return 0;
}
