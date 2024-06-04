#include <stdio.h>

int main()
{
    FILE *pF = fopen("C:\\Users\\freed\\Desktop\\test.txt", "w");

    fprintf(pF, "\nfeeedus prova");

    fclose(pF);

    // if (remove("test.txt") == 0)
    // {
    //     printf("that file was deleted successfully!");
    // }
    // else
    // {
    //     printf("That file was NOT deleted!");
    // }

    return 0;
}