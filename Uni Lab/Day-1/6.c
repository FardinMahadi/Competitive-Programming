#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a < b && a < c)
    {
        printf("%d is the smallest number.", a);
    }
    else if (b < a && b < c)
    {
        printf("%d is the smallest number.", b);
    }
    else if (c < b && c < a)
    {
        printf("%d is the smallest number.", c);
    }

    return 0;
}