#include <stdio.h>

int x = 10;

void test()
{
    int x = 5;
    printf("%d\n", x); // Refers to the local variable x
}

void test2()
{
    printf("%d\n", x++);
}

int main()
{
    test();
    test2();
    printf("%d\n", x); // Refers to the global variable x
    return 0;
}