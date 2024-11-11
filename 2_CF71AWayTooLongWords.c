#include <stdio.h>

int stringLen(char *str);

int main()
{
    char longWord[100];
    scanf("%s", longWord);
    int length = stringLen(longWord);

    if (length > 10)
    {
        printf("%c%d%c", longWord[0], length - 2, longWord[length - 1]);
    }
    else
    {
        printf("%s", longWord);
    }

    return 0;
}

int stringLen(char *str)
{
    int length = 0;
    while (*str != '\0')
    {
        length++;
        str++;
    }
    return length;
}
