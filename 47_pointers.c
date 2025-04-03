// #include <stdio.h>

// int main()
// {
//     int a = 50;
//     printf("%d\n", a);
//     printf("%p\n", &a);
//     return 0;
// }

#include <stdio.h>

int main()
{
    int a = 50;
    int *ptr = &a;
    printf("Value of a: %d\n", a);
    printf("Address of a:\t %p\n", &a);
    printf("Address of ptr:\t %p\n", ptr);
    printf("Value of a: %d\n", *ptr);
    return 0;
}