// In the name of Allah, the Most Gracious, the Most Merciful
#include <iostream>
#include <map>
using namespace std;

int main()
{
    // map<char, int> mp = {
    //     {'t', 7},
    //     {'s', 8},
    //     {'a', 4}};

    // mp['u'] = 9;
    // pair<char, int> p1('j', 5);
    // mp.insert(p1);
    // // mp.erase(p1.first);
    // // mp.clear();

    // // cout << mp.size() << endl;
    // // cout << mp['j'] << endl;

    // for (map<char, int>::iterator itr = mp.begin(); itr != mp.end(); ++itr)
    // {
    //     cout << itr->first << " " << itr->second << endl;
    //     // (*itr).second = itr-> second
    // }

    string test = "Hello world my name is fardin! hahahaaha";

    map<char, int> freq;
    // store the frequency
    for (int i = 0; i < test.length(); ++i)
    {
        char letter = test[i];

        if (freq.find(letter) == freq.end())
        {
            freq[letter] = 0;
        }

        freq[letter]++;
    }

    for (auto itr = freq.begin(); itr != freq.end(); ++itr)
    {
        cout << itr->first << " => " << itr->second << endl;
    }

    return 0;
}