#include <stdio.h>

int main()
{
    struct Books
    {
        char title[100];
        char author[100];
        int price;
    }

    struct Books book[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter title, author and price of book %d: ", i);
        scanf("%s %s %d", &book[i].title, &book[i].author, &book[i].price);
    }

    int expBookInd;

    if (book[0].price >= book[1].price)
    {
        if (book[0].price >= book[2].price)
            expBookInd = 0;
        else
            expBookInd = 2;
    }
    else if (book[1].price >= book[2].price)
    {
        expBookInd = 1;
    }
    else
    {
        expBookInd = 2;
    }

    printf("The most expensive book is: %s by %s\n", book[expBookInd].title, book[expBookInd].author);

    return 0;
}