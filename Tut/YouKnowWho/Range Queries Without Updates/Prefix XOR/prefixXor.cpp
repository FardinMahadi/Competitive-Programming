// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

void prefixXor(const vector<int> &arr, vector<int> &preXor)
{
    preXor[0] = arr[0];
    // Xoring present element with previous element
    for (size_t i = 1; i < arr.size(); i++)
        preXor[i] = preXor[i - 1] ^ arr[i];
}

int main()
{
    vector<int> arr = {10, 20, 10, 5, 15};
    size_t n = arr.size();
    vector<int> preXor(n);

    // Function call
    prefixXor(arr, preXor);
    cout << "Given Array: ";
    for (int val : arr)
        cout << val << " ";
    cout << endl;

    cout << "Prefix Xor: ";
    for (int val : preXor)
        cout << val << " ";
    return 0; // added return statement
}