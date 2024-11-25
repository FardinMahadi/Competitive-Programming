#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("-----\n");
    printf("a: %d \nb: %d\n", a, b);
    printf("-----\n");

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a: %d \nb: %d", a, b);

    return 0;
}