#include <stdio.h>
#include <string.h>

// typedef char user[25];

typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;

int main()
{
    //* typedef = reserved keyword that gives an existing datatype a "nickname"

    // char user1[25] = "freedus";

    User user1 = {"freedus", "password123", 123456};
    User user2 = {"drew", "password321", 654321};

    printf("%s\n", user1.name);
    printf("%s\n", user2.name);

    return 0;
}