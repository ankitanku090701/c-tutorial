#include <stdio.h>

void greeting(char name[], int age)
{
    printf("Hello %s my age is %d\n", name, age);
}

void sum(int a, int b)
{
    int sum = a + b;
    printf("The sum is: %d\n", sum);
}

void printArray(int a[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

int add5(int x)
{
    return x + 5;
}

int sum1(int a, int b)
{
    return a + b;
}

float toCelsius(float f)
{
    return (5.0 / 9.0) * (f - 32);
}

int main()
{
    greeting("Ankit", 23);
    sum(99, 199);
    int a[5] = {10, 15, 20, 25, 30};
    printArray(a);
    printf("add5 is: %d\n", add5(10));
    printf("Sum1 of two no is: %d\n", sum1(99, 299));
    int result = sum1(99, 399);
    printf("sum1 as result is: %d\n", result);

    int resultArr[5];
    resultArr[0] = sum1(1, 2);
    resultArr[1] = sum1(2, 3);
    resultArr[2] = sum1(3, 4);
    resultArr[3] = sum1(4, 5);
    resultArr[4] = sum1(5, 6);

    for (int i = 0; i < 5; i++)
    {
        printf("Result%d is %d\n", i + 1, resultArr[i]);
    }

    printf("Converted to celsius: %0.1f\n", toCelsius(98.6));

    return 0;
}