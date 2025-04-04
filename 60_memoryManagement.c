#include <stdio.h>

int main()
{
    int a;
    float b;
    double c;
    char d;

    printf("%lu\n", sizeof(a)); // 4 bytes
    printf("%lu\n", sizeof(b)); // 4 bytes
    printf("%lu\n", sizeof(c)); // 8 bytes
    printf("%lu\n", sizeof(d)); // 1 byte
}