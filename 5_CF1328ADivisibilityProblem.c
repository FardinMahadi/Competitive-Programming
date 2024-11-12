#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        if (a % b == 0)
        {
            printf("0\n");
        }
        else
        {
            int remainder = a % b;
            int minTest = b - remainder;
            printf("%d\n", minTest);
        }
    }

    return 0;
}
