// In the name of Allah, the Most Gracious, the Most Merciful
/**
 * You are given a string S of length N.
 * Answer Q queries: given L and R, find the most common character in the substring S[L..R].
 * N, Q <= 10^5
 *
 * S = "abcccabaaabb"
 */
#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int n = s.length();
    vector<vector<int>> pref(n + 1, vector<int>(26));
    // pref[5][0] = occurrences of 'a in s[0...4]
    for (int i = 0; i < n; i++)
    {
        pref[i + 1] = pref[i];    // copy all 26 values
        int char_id = s[i] - 'a'; // value 0...25
        pref[i + 1][char_id]++;
    }

    // read queries
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int L, R;
        cin >> L >> R;
        char best_char = '?';
        int best_freq = -1;
        for (int char_id = 0; char_id < 26; char_id++)
        {
            int freq = pref[R + 1][char_id] - pref[L][char_id];
            if (freq > best_freq)
            {
                best_freq = freq;
                best_char = char_id + 'a';
            }
        }
        cout << best_char << "\n";
    }
}