// In the name of Allah, the Most Gracious, the Most Merciful
// Linear Search
#include <stdio.h>
#include <limits.h>

int main() {
    int a[] = {30, 52, 29, 87, 63, 27, 19, 54};
    int item, pos = -1;
    
    int n = sizeof(a)/ sizeof(a[0]);

    printf("Enter item to search: ");
    scanf("%d", &item);


    for (int i = 0; i < n; i++) {
        if (a[i] == item) {
            pos = i;
            break;
        }
    }

    if (pos == -1)
        printf("\nItem not found.");
    else
        printf("Item %d found at position %d", item, pos);

    return 0;
}