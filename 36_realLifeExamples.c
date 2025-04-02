// #include <stdio.h>

// int main()
// {
//     int i;
//     for (i = 0; i <= 100; i += 10)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i;
//     for (i = 0; i <= 10; i = i + 2)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i;
//     for (i = 1; i < 10; i = i + 2)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i;
//     for (i = 2; i <= 512; i *= 2)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int number = 2;
    int i;

    // Print the multiplication table for the number 2
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    return 0;
}