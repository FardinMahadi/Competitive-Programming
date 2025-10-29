// In the name of Allah, the Most Gracious, the Most Merciful
// Bubble Sort
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int data[n], k, i, ptr, tmp;

    for (i = 0; i < n; i++)
        scanf("%d", &data[i]);

    for (k = 1;k < n; k++) {
        for (ptr = 0; ptr < n - k; ptr++) {
            if (data[ptr] > data[ptr + 1]) {
                tmp = data[ptr];
                data[ptr] = data[ptr + 1];
                data[ptr + 1] = tmp;
            }
        }
    }
    
    for (i = 0; i < n; i++)
        printf("%d\t", data[i]);
    printf("\n");

    return 0;
}