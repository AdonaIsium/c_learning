#include <stdio.h>

int main()
{
    // BITWISE OPERATORS = special operators used in bit level programming

    // & = bitwise AND
    // | = bitwise OR
    // ^ = bitwise XOR
    // ~ = bitwise NOT
    // << = bitwise left shift
    // >> = bitwise right shift

    int x = 6;  // 00000110
    int y = 12; // 00001100
    int z = 0;  // 00000000

    z = x & y; // 00000100
    printf("AND \tz = %d\n", z);
    z = x | y; // 00001110
    printf("OR \tz = %d\n", z);
    z = x ^ y; // 00001010
    printf("XOR \tz = %d\n", z);
    z = ~x; // 11111001
    printf("NOT \tz = %d\n", z);
    z = x << 2; // 00110000
    printf("LSHIFT \tz = %d\n", z);
    z = x >> 2; // 00000001
    printf("RSHIFT \tz = %d\n", z);
    return 0;
}