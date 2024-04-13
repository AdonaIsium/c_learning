#include <stdio.h>
#include <stdbool.h>

int main()
{

    char a = 'C';            // Single character   – %c
    char b[] = "Adonalsium"; // String of characters – %s

    float c = 3.141592;                // 4 bytes(32 bits of precision) 6-7 digits %f
    double d = 3.14159265358979323846; // 8 bytes(64 bits of precision) 15-16 digits %lf

    bool e = true; // 1 byte (true or false) %d

    char f = 100;          // 1 byte -128 to 127 %d or %c
    unsigned char g = 255; // 1 byte 0 to 255 %d or %c

    short h = 32767;          // 2 bytes -32,768 to 32,767 %d
    unsigned short i = 65535; // 2 bytes 0 to 65,535 %d

    int j = 2147483647;           // 4 bytes -2,147,483,648 to 2,147,483,647 %d
    unsigned int k = 42949672945; // 4 bytes 0 to 4,294,967,295 %u

    long l = 2147483647;          // 4 bytes -2,147,483,648 to 2,147,483,647 %ld
    unsigned long m = 4294967295; // 4 bytes 0 to 4,294,967,295 %ld

    long long n = 9223372036854775807;          // 8 bytes -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 %lld
    unsigned long long o = 1844674407370955111; // 8 bytes 0 to 18,446,744,073,709,551,615 %llu

    printf("char a = %c\n", a);
    printf("char b = %s\n", b);
    printf("float c = %f\n", c);
    printf("double d = %lf\n", d);
    printf("bool e = %d\n", e);
    printf("char f = %d\n", f);
    printf("unsigned char g = %d\n", g);
    printf("short h = %d\n", h);
    printf("unsigned short i = %d\n", i);
    printf("int j = %d\n", j);
    printf("unsigned int k = %u\n", k);
    printf("long l = %ld\n", l);
    printf("unsigned long m = %ld\n", m);
    printf("long long n = %lld\n", n);
}