// 1 + 2 + 3 + 4 + ... + nth
#include <stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("Total Sum: %d", sum);

    return 0;
}