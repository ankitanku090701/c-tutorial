// #include <stdio.h>

// int main()
// {
//     FILE *fptr;
//     fptr = fopen("test.txt", "w");
//     fprintf(fptr, "Hello, Ankit");
//     fclose(fptr);
//     return 0;
// }

#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "a");
    fprintf(fptr, "\nHello, World!!!");
    fclose(fptr);
    return 0;
}