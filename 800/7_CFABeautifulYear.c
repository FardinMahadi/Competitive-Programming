#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    year += 1;

    while (1)
    {
        int y = year;
        int digits[10] = {0};
        int is_beautiful = 1;

        while (y > 0)
        {
            int digit = y % 10;
            if (digits[digit])
            {
                is_beautiful = 0;
                break;
            }
            digits[digit] = 1;
            y /= 10;
        }

        if (is_beautiful)
        {
            printf("The next beautiful year is: %d\n", year);
            break;
        }

        year += 1;
    }

    return 0;
}
