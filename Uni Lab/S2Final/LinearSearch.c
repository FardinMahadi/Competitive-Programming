// In the name of Allah, the Most Gracious, the Most Merciful
#include<stdio.h>

int main()
{
    int la[] = {1, 3, 5, 7, 8};
    int item = 5, n = 5;
    int i = 0, j = 0;
    
    printf("The original array elements are:\n");
    for(i = 0;i < n; i++)
        printf("LA[%d] = %d\n", i, la[i]);
    
    while (j < n) {
        if (la[j] == item) break;
        j++;
    }
    printf("Found element %d at position %d\n", item, j+1);
    
    return 0;
}