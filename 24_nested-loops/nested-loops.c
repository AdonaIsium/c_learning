#include <stdio.h>

int main()
{
    // nested loops = a loop inside of another loop
    /*
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                printf("i: %d, j: %d\n", i, j);
            }
        }
    */
    int rows;
    int columns;
    char symbol;

    printf("\nEnter # of rows: ");
    scanf("%d", &rows);

    printf("Enter # of columns: ");
    scanf("%d", &columns);

    printf("Enter symbol to use: ");
    scanf(" %c", &symbol);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}