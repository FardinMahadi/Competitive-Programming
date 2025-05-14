#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str1[101], str2[101];
    scanf("%s", str1);
    scanf("%s", str2);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        str1[i] = tolower(str1[i]);
    }
    for (int i = 0; str2[i] != '\0'; i++)
    {
        str2[i] = tolower(str2[i]);
    }

    int result = strcmp(str1, str2);
    if (result < 0)
    {
        printf("-1\n");
    }
    else if (result > 0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}
