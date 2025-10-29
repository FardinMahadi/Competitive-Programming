// In the name of Allah, the Most Gracious, the Most Merciful
// Bubble Sort
#include <stdio.h>

int main() {
    int a[] = {30, 52, 29, 87, 63, 27, 19, 54};

    int n = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] < a[j + 1]) {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }

    printf("\nThe sorted array is: ");
    for (int i = 0; i < n; i++) 
        printf("%d ", a[i]);

    return 0;
}