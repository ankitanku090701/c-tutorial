// #include <stdio.h>

// int main()
// {
//     char greetings[] = "Hello World!";
//     printf("%s\n", greetings);
//     printf("%c\n", greetings[0]);
//     greetings[0] = 'A';
//     printf("%s\n", greetings);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char carName[] = "Volvo";
//     int i;

//     for (i = 0; i < 5; ++i)
//     {
//         printf("%c", carName[i]);
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char carName[] = "Volvo";
//     int length = sizeof(carName) / sizeof(carName[0]);
//     int i;

//     for (i = 0; i < length; ++i)
//     {
//         printf("%c", carName[i]);
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
//     printf("%s", greetings);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
//     char greetings2[] = "Hello World!";

//     printf("%lu\n", sizeof(greetings));  // Outputs 13
//     printf("%lu\n", sizeof(greetings2)); // Outputs 13

//     return 0;
// }

#include <stdio.h>

int main()
{
    char message[] = "Good to see you,";
    char fname[] = "John";
    printf("%s %s!\n", message, fname);
    return 0;
}