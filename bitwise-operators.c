#include <stdio.h>

//* BITWISE OPERATORS = special operators used in bit level programming

// & = and
// | = or
// ^ = xor
// << = left shift
// >> = right shift

int main()
{

    int x = 6;  //  6 = 00000110
    int y = 12; // 12 = 00001100
    int z = 0;  // 14 = 00001010

    z = x & y;
    printf("AND = %d\n", z);

    z = x | y;
    printf("OR = %d\n", z);

    z = x ^ y;
    printf("XOR = %d\n", z);

    z = x << 1;
    printf("left shift = %d\n", z);

    z = x >> 1;
    printf("left shift = %d\n", z);

    return 0;
}