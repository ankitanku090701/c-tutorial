// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int *ptr1, *ptr2, size;
//     size = 4 * sizeof(*ptr1);
//     ptr1 = malloc(size);

//     printf("%d bytes allolcated at address %p\n", size, ptr1);

//     size = 6 * sizeof(*ptr1);
//     ptr2 = realloc(ptr1, size);

//     printf("%d bytes reallocated at address %p\n", size, ptr2);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr1, *ptr2;
    ptr1 = malloc(4);

    ptr2 = realloc(ptr1, 8);

    if (ptr2 == NULL)
    {
        printf("Faild. Unable to resize memory");
    }
    else
    {
        printf("Success. 8 bytes reallocated at address %p\n", ptr2);
    }

    free(ptr1);
    return 0;
}