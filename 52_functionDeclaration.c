#include <stdio.h>

void test()
{
    printf("I just got executed!\n");
}

void test2();

int sum(int a, int b);

void fun1();
void fun2();

int main()
{
    test();
    test2();
    printf("%d\n", sum(55, 99));
    fun2();
    return 0;
}

void test2()
{
    printf("Testing...\n");
}

int sum(int a, int b)
{
    return a + b;
}

void fun1()
{
    printf("Hello\n");
}

void fun2()
{
    printf("...\n");
    fun1();
}