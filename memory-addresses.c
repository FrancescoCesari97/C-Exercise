#include <stdio.h>

int main()
{
    //* memory = an array of bytes within RAM (street)
    //* memory block = a sigle unit (byte) within memory, used to hold some value (person)
    //* memory address = the address of where a memory block is located (house address)

    // int a = 'X';
    // short b = 'Y';
    // char c = 'Z';

    char a;
    char b[2];

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    // printf("%d bytes\n", sizeof(c));

    // address
    printf("%p\n", &a);
    printf("%p\n", &b);
    // printf("%p\n", &c);

    return 0;
}