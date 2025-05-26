// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // set<char> s1 = {
    //     'c',
    //     'd',
    //     'c',
    //     'd',
    //     'a'};

    // s1.insert('b');
    // s1.erase('c');

    // if (s1.find('b') == s1.end())
    //     cout << "Could not find C" << endl;
    // else
    //     cout << "Found C!" << endl;

    // for (auto itr = s1.begin(); itr != s1.end(); ++itr)
    // {
    //     cout << *itr << endl;
    // }

    // string test = "This is a test iii jj j hgahs";
    // set<char> exists;

    // for (int i = 0; i < test.length(); ++i)
    // {
    //     char letter = test[i];
    //     exists.insert(letter);
    // }

    // for (auto itr = exists.begin(); itr != exists.end(); ++itr)
    //     cout << *itr << endl;

    string test = "This is a test iii jj j hgahs";
    string find = "hello";
    set<char> findLetters;

    for (int i = 0; i < find.length(); ++i)
    {
        char letter = find[i];
        findLetters.insert(letter);
    }

    for (int i = 0; i < test.length(); ++i)
    {
        char letter = test[i];
        findLetters.erase(letter);
    }

    if (findLetters.size() > 0)
        cout << "No! It does not contain all the letters" << endl;
    else
        cout << "Yes! It does!" << endl;

    return 0;
}