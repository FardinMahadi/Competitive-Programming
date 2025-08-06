// In the name of Allah, the Most Gracious, the Most Merciful
// C: FardinMahadi

#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);

    int low = 0, high = n - 1;
    int target = 8;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == target) {
            cout << mid << endl;
            return 0;
        } else if (target > a[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << "Not found" << endl;
    return 0;
}