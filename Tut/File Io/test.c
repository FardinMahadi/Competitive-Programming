#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    while (n--)
    {
        FILE *std;
        int marks;
        char name[100];

        printf("Enter name and marks: ");
        scanf("%s %d", name, &marks);

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