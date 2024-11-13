#include <stdio.h>
#include <ctype.h>

int main()
{
    char word[1001];
    scanf("%1000s", word);

    if (word[0] >= 'a' && word[0] <= 'z')
    {
        word[0] = toupper(word[0]);
    }

    printf("%s", word);

    return 0;
}
