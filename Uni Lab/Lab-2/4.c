#include <stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += 8 * i - 4;
    }

    printf("Total Sum: %d", sum);

    return 0;
}