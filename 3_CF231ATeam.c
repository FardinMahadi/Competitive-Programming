#include <stdio.h>

int main()
{
    int n, solveProblem = 0, petya, vasya, tonya;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &petya, &vasya, &tonya);
        if ((petya == 0 || petya == 1) && (vasya == 0 || vasya == 1) && (tonya == 0 || tonya == 1))
        {
            if ((petya + vasya + tonya) >= 2)
            {
                solveProblem++;
            }
        }
    }

    printf("%d", solveProblem);

    return 0;
}