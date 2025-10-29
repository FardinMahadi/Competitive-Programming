// In the name of Allah, the Most Gracious, the Most Merciful
// Binary Search
#include <stdio.h>

int main() {
    int n, i, left, right, target, mid;
    printf("Enter the size of list: ");
    scanf("%d", &n);

    int data[n];
    for (i = 0; i < n; i++) {
        printf("Enter Data[%d]: ", i);
        scanf("%d", &data[i]);
    }

    printf("\nEnter item to be searched: ");
    scanf("%d", &target);

    left = 0;
    right = n - 1;

    while (left <= right) {
        mid = left + (right - left) / 2;
        
        if (data[mid] == target) break;
        else if (target < data[mid]) right = mid - 1;
        else left = mid + 1;
    }

    if (target == data[mid]) printf("Item %d is at index %d\n", target, mid);
    else printf("Item is not in the list.\n");

    return 0;
}