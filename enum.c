#include <stdio.h>

enum Day
{
    Sun = 1,
    Mon = 2,
    Tue = 3,
    Wed = 4,
    Thu = 5,
    Fri = 6,
    Sat = 7
};

int main()
{
    //* enum = a user defined type of named integer identifiers helps to make a program more readable

    enum Day today = Mon;

    // printf("%d", today); //* enums are NOT STRING, but they can be treated as int

    if (today == Sun || today == Sat)
    {
        printf("it's the weekend bro!!");
    }
    else
    {
        printf("mann what a week");

        return 0;
    }
}