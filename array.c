#include <stdio.h>

#include <string.h>

int main()
{
    //!/ ARRAY
    // double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};

    // printf("%.2lf", prices[1]);
    // return 0;
    //!/

    //!/ how to loop through and print the elements of an ARRAY

    // double prices[] = {5.0, 10.0, 15.0, 25.0};

    // // printf("%d bytes\n", sizeof(prices)); //* using sizeof to calculate the amount of elements inside our array

    // for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++)
    // {
    //     printf("$%.2lf\n", prices[i]);
    // }
    //!/

    //!/ 2D ARRAY an array where each element is an entire array useful if you need a matrix, grid or table of data

    // int numbers[2][3] =
    //     {
    //         {1, 2, 3},
    //         {4, 5, 6}};

    // int numbers[3][3];

    // int rows = sizeof(numbers) / sizeof(numbers[0]);
    // int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    // printf("rows: %d\n", rows);
    // printf("columns: %d\n", columns);

    // numbers[0][0] = 1;
    // numbers[0][1] = 2;
    // numbers[0][2] = 3;
    // numbers[1][0] = 4;
    // numbers[1][1] = 5;
    // numbers[1][2] = 6;
    // numbers[2][0] = 7;
    // numbers[2][1] = 8;
    // numbers[2][2] = 9;

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < columns; j++)
    //     {
    //         printf("%d ", numbers[i][j]);
    //     }
    //     printf("\n");
    // }

    //!/

    //!/ ARRAY OF STRINGS

    char cars[][10] = {"mustang", "Corvette", "fiat"};

    // cars[0] = "Tesla";
    strcpy(cars[1], "Tesla");

    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }

    //!/
    return 0;
}
