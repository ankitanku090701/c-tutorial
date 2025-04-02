// #include <stdio.h>

// int main()
// {
//     int a[] = {1, 3, 5, 7, 9};
//     a[0] = 100;
//     printf("%d\n", a[0]);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a[] = {1, 3, 5, 7, 9};
//     int i;
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d\n", a[i]);
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int a[5];
    a[0] = 1;
    a[1] = 3;
    a[2] = 5;
    a[3] = 7;
    a[4] = 9;
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}