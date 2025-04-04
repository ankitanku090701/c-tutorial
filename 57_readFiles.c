// // #include <stdio.h>

// // int main()
// // {
// //     FILE *fptr;
// //     fptr = fopen("test.txt", "r");
// //     char a[100];
// //     fgets(a, 100, fptr);
// //     printf("%s", a);
// //     return 0;
// // }

// #include <stdio.h>

// int main()
// {
//     FILE *fptr;
//     fptr = fopen("test.txt", "r");
//     char a[100];
//     while (fgets(a, 100, fptr))
//     {
//         printf("%s", a);
//     }
//     printf("\n");
//     fclose(fptr);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     FILE *fptr;
//     fptr = fopen("test.txt", "r");
//     char a[100];
//     fgets(a, 100, fptr);
//     printf("%s", a);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     FILE *fptr;
//     fptr = fopen("test2.txt", "r");
//     if (fptr == NULL)
//     {
//         printf("Not able to open the file\n");
//     }
//     fclose(fptr);
//     return 0;
// }

#include <stdio.h>

int main()
{
    FILE *fptr;

    // Open a file in read mode
    fptr = fopen("test.txt", "r");

    // Store the content of the file
    char a[100];

    // If the file exist
    if (fptr != NULL)
    {

        // Read the content and print it
        while (fgets(a, 100, fptr))
        {
            printf("%s", a);
        }

        // If the file does not exist
    }
    else
    {
        printf("Not able to open the file.");
    }

    printf("\n");

    // Close the file
    fclose(fptr);
    return 0;
}