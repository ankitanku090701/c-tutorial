// #include <stdio.h>

// int main()
// {
//     int a[4] = {25, 50, 75, 100};
//     int i;

//     for (i = 0; i < 4; i++)
//     {
//         printf("%d\t", a[i]);
//         printf("%p\n", &a[i]);
//     }

//     printf("Size of int: %lu\n", sizeof(i));
//     printf("Size of a array: %lu\n", sizeof(a));
//     printf("Address of a:\t\t %p\n", a);
//     printf("Address of a[0]:\t %p\n", &a[0]);
//     printf("Value of a[0]:\t %d\n", *(&a[0]));
//     printf("Value of a[0]:\t %d\n", *a);
//     printf("Value of a[1]:\t %d\n", *(a + 1));
//     return 0;
// }

#include <stdio.h>

int main()
{
    int a[4] = {25, 50, 75, 100};
    int *ptr = a;
    int i, j;

    for (i = 0; i < 4; i++)
    {
        printf("%d\n", *(ptr + i));
    }

    printf("\n");

    *a = 10;
    *(a + 2) = 20;

    for (j = 0; j < 4; j++)
    {
        printf("%d\n", *(ptr + j));
    }

    return 0;
}