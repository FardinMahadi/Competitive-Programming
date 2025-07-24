// In the name of Allah, the Most Gracious, the Most Merciful
// C: FardinMahadi

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
long long a[N], t[4 * N];

void build(int idx, int l, int r) {
    if (l == r) {
        t[idx] = a[l];
        return;
    }

    int mid = (l + r) / 2;
    build(2 * idx, l, mid);
    build(2 * idx + 1, mid + 1, r);

    t[idx] = min(t[2 * idx], t[2 * idx + 1]);
}

long long query(int idx, int l, int r, int qs, int qe) {
    if (qs <= l && r <= qe) return t[idx];
    if (r < qs || l > qe) return LLONG_MAX;

    int mid = (l + r) / 2;
    long long leftMin = query(2 * idx, l, mid, qs, qe);
    long long rightMin = query(2 * idx + 1, mid + 1, r, qs, qe);

    return min(leftMin, rightMin);
}

int32_t main() {
    int n, q;
    cin >> n >> q;

    for (int i = 1; i <= n; i++) cin >> a[i];

    build(1, 1, n);

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << query(1, 1, n, l, r) << endl;
    }

    return 0;
}
