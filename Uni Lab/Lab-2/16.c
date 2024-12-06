#include <stdio.h>
#include <math.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += (4 + i) * (5 + i) * (6 + i);
    }

    printf("Total Sum: %d", sum);

    return 0;
}