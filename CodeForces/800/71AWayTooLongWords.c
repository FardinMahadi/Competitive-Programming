#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char longWord[101];
        scanf("%s", longWord);

        int length = strlen(longWord);

        if (length > 10)
        {
            printf("%c%d%c\n", longWord[0], length - 2, longWord[length - 1]);
        }
        else
        {
            printf("%s\n", longWord);
        }
    }

    return 0;
}
