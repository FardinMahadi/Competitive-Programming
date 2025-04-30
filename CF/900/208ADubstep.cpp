// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

vector<string> split(const string &str, const string &delimiter)
{
    vector<string> tokens;
    size_t start = 0, end, delimLength = delimiter.length();

    while ((end = str.find(delimiter, start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));
        start = end + delimLength;
    }
    tokens.push_back(str.substr(start));

    return tokens;
}

int main()
{
    string str;
    cin >> str;

    vector<string> words = split(str, "WUB");

    for (const auto &word : words)
    {
        if (!word.empty())
            cout << word << " ";
    }

    return 0;
}
