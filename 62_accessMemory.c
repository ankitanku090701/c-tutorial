// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int *ptr;
//     ptr = calloc(5, sizeof(*ptr));
//     *ptr = 2;
//     ptr[1] = 4;
//     ptr[2] = 6;

//     printf("%d\n", *ptr);
//     printf("%d %d %d\n", ptr[1], ptr[2], ptr[3]);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr1 = malloc(4);
    char *ptr2 = (char *)ptr1;
    ptr1[0] = 1684234849;
    printf("%d is %c %c %c %c\n", *ptr1, ptr2[0], ptr2[1], ptr2[2], ptr2[3]);
    return 0;
}