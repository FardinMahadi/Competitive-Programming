// In the name of Allah, the Most Gracious, the Most Merciful
// C: FardinMahadi

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
long long a[N], t[4*N];
int rangeStart, rangeEnd;

void build(int idx, int l, int r) {
    if (l == r) {
        t[idx] = a[l];
        return;
    }

    int mid = (l + r) / 2;
    int left = 2 * idx;
    int right = 2 * idx + 1;
    
    build(left, l, mid);
    build(right, mid + 1, r);

    t[idx] = min(t[left], t[right]);
}

int query(int idx, int l, int r) {
    // query(rootIdx, leftVal, rightVal)
    if (rangeStart <= l && r <= rangeEnd) return t[idx];
    if (r < i || l > j) return INT_MAX;     

    int mid = (l + r) / 2;
    int left = 2 * idx;
    int right = 2 * idx + 1;

    long long leftMin = query(left, l, mid);
    long long rightMin = query(right, mid + 1, r);

    return min(leftMin, rightMin);
}

int main() {
    int n, q; cin >> n >> q;

    for (int i = 1; i <= n; i++) cin >> a[i];

    build(1, 1, n);

    while (q--) {
        cin >> rangeStart >> rangeEnd;
        cout << query(1, 1, n) << endl;
    }
    
    return 0;
}