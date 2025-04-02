// #include <stdio.h>

// int main()
// {
//     int a[] = {1, 3, 5, 7, 9};
//     int lenght = sizeof(a) / sizeof(a[0]);
//     printf("%lu\n", sizeof(a));
//     printf("%d\n", lenght);
//     return 0;
// }

#include <stdio.h>

int main()
{
    int a[] = {1, 3, 5, 7, 9};
    int lenght = sizeof(a) / sizeof(a[0]);
    // printf("%lu\n", sizeof(a));
    // printf("%d\n", lenght);
    for (int i = 0; i < lenght; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}