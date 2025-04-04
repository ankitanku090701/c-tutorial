// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int *ptr;
//     ptr = malloc(sizeof(*ptr));
//     free(ptr);
//     ptr = NULL;
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int *ptr;
//     ptr = malloc(sizeof(*ptr)); // Allocate memory for one integer

//     // If memory cannot be allocated, print a message and end the main() function
//     if (ptr == NULL)
//     {
//         printf("Unable to allocate memory");
//         return 1;
//     }

//     // Set the value of the integer
//     *ptr = 20;

//     // Print the integer value
//     printf("Integer value: %d\n", *ptr);
//     printf("Integer value: %d\n", ptr[0]);

//     // Free allocated memory
//     free(ptr);

//     // Set the pointer to NULL to prevent it from being accidentally used
//     ptr = NULL;
//     return 0;
// // }
// }

#include <stdio.h>
#include <stdlib.h>

void test()
{
    int *ptr;
    ptr = malloc(sizeof(*ptr));
}

int main()
{
    int x = 5;
    int *ptr;
    ptr = calloc(2, sizeof(*ptr));
    ptr = &x;
    test();
    printf("The function has ended\n");

    int *ptr2;
    ptr2 = malloc(sizeof(*ptr));
    ptr2 = realloc(ptr2, 2 * sizeof(*ptr));
    return 0;
}
