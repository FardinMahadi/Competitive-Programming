// In the name of Allah, the Most Gracious, the Most Merciful
#include<stdio.h>

int main()
{
    int la[] = {1, 3, 5, 7, 8};
    int item = 10, k = 3, n = 5;
    int i = 0, j = n;
    
    printf("The original array elements are:\n");
    for(i = 0;i < n; i++)
        printf("LA[%d] = %d\n", i, la[i]);

    return 0;
}