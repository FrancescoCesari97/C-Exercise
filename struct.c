#include <stdio.h>
#include <string.h>

struct Player
{
    char name[12];
    int score;
};

int main()
{
    //* STRUCT = collection of related members("variables")
    //*  they can be of different data types listed under one name
    //*  in a block of memory Very similar to classes in other languages

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "freedus");
    player1.score = 5;

    strcpy(player2.name, "drew");
    player2.score = 8;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);
    return 0;
}