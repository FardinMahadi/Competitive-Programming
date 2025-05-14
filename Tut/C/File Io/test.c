#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    while (n--)
    {
        FILE *std;
        char name[100];
        int marks;

        printf("Enter name: ");
        scanf("%s", name);
        printf("Enter mark: ");
        scanf("%d", &marks);

        std = fopen("student.txt", "a");
        if (std == NULL)
        {
            printf("Error opening file!\n");
            return 1;
        }
        fprintf(std, "%s %d\n", name, marks);
        fclose(std);
    }

    return 0;
}