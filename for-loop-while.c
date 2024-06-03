#include <stdio.h>

int main()
{
    //!/ FOR loop
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d\n", i);
    // }
    //!/
    // char name[25];

    // printf("\nWhat's your name?: ");
    // fgets(name, 25, stdin);
    // name[strlen(name) - 1] = '\0';

    //!/ WHILE loop
    // while (strlen(name) == 0)
    // {
    //     printf("\nYou did not enter your name");
    //     printf("\nWhat's your name?: ");
    //     fgets(name, 25, stdin);
    //     name[strlen(name) - 1] = '\0';
    // }
    //!/

    //!/ DO WHILE LOOP

    // int number = 0;

    // int sum = 0;

    // do
    // {
    //     printf("Enter a Number above 0: ");
    //     scanf("%d", &number);
    //     if (number > 0)
    //     {
    //         sum += number;
    //     }
    // } while (number > 0);

    // printf("sum: %d", sum);

    //!/

    //!/ NESTED LOOP

    // int rows;
    // int columns;
    // char symbol;

    // printf("\n Enter number of rows: ");
    // scanf("%d", &rows);

    // printf("\n Enter number of columns: ");
    // scanf("%d", &columns);

    // getchar(); // Consume any leftover newline character

    // printf("Enter a symbol to use: ");
    // scanf("%c", &symbol);

    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= columns; j++)
    //     {
    //         printf("%c", symbol);
    //     }
    //     printf("\n");
    // }

    //!/

    //!/ NESTED LOOP

    //!/ CONTINUE =  skips rest of code and force the next iteration of the loop

    for (int i = i; i <= 20; i++)
    {
        if (i == 13)
        {
            continue;
        }
        printf("%D\n", i);
    }

    //!/

    return 0;
}
